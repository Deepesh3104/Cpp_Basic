from flask import Flask, render_template, request, jsonify
import pickle
import json

app = Flask(__name__)
model = pickle.load(open('gb_model.pkl', 'rb'))

@app.route('/')
def index():
    return render_template('importdata.html')

@app.route('/predict', methods=['POST'])
def predict():
    data = request.get_json()
    records = data.get('records', [])
    
    # Perform the prediction using the loaded model
    # Replace this with your own prediction logic
    prediction = model.predict(records)
    
    # Return the prediction result as JSON
    return json.dumps(prediction.tolist())

if __name__ == '__main__':
    app.run(debug=True)
    app.run(host='0.0.0.0', port=8080)

