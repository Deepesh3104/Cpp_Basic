from flask import Flask, render_template, request
import pickle
import numpy as np

app = Flask(__name__)


with open("gb_model.pkl", "rb") as file:
    model = pickle.load(file)



@app.route('/')
def home():
    return render_template('index.html')


@app.route("/predict", methods=["POST"])
def predict():
    maritalStatus = request.form["maritalStatus"]
    hoursWeek = request.form["hours_week"]
    gender = request.form["gender"]
    occupation = request.form["occupation"]
    customerID = request.form["customerID"]
    age = request.form["age"]
    monthsAsCustomer = request.form["monthsAsCustomer"]
    policyDeductable = request.form["policyDeductable"]
    policyAnnualPremium = request.form["policyAnnualPremium"]
    insuredRelationship = request.form["insuredRelationship"]
    capitalGains = request.form["capitalGains"]
    capitalLoss = request.form["capitalLoss"]
    incidentType = request.form["incident_type"]
    collisionType = request.form["collision_Type"]
    incidentSeverity = request.form["incident_severity"]
    authoritiesContacted = request.form["authorities_contacted"]
    numberOfVehiclesInvolved = request.form["number_of_vehicles_involved"]
    propertyDamage = request.form["property_damage"]
    bodilyInjuries = request.form["bodily_injuries"]
    witnesses = request.form["witnesses"]
    # policeReportAvailable = request.form["police_report_available"]
    totalClaimAmount = request.form["total_claim_amount"]
    injuryClaim = request.form["injury_claim"]
    propertyClaim = request.form["property_claim"]
    vehicleClaim = request.form["vehicle_claim"]
    state = request.form["state"]
    vehicleAge = request.form["vehicle_age"]
    work = request.form["work"]

    # Perform any necessary preprocessing or feature engineering here

    # Predict the claim likelihood using the loaded model
    data = np.array([
        [maritalStatus, hoursWeek, gender, occupation, customerID, age, monthsAsCustomer,
         policyDeductable, policyAnnualPremium, insuredRelationship, capitalGains, capitalLoss, incidentType,
         collisionType, incidentSeverity, authoritiesContacted, numberOfVehiclesInvolved, propertyDamage,
         bodilyInjuries, witnesses,  totalClaimAmount, injuryClaim, propertyClaim,
         vehicleClaim,  state, vehicleAge, work]
    ])

    data = np.reshape(data, (-1, 1))
    output = model.predict(data)

    # Return the prediction result
    if output[0] == 1:
        return "Claim"
    else:
        return "No claim"


if __name__ == '__main__':
    app.run(debug=True)
