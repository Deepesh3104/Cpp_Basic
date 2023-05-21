#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number to print fibonachi "<<" ";
    cin>>n;
    int a=0;
    cout<<a<<endl;
    int b=1;
    cout<<b<<endl;

    for (int i = 1; i <=n; i++)

    {
        int nextNumber =a+b;
        
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";

    }
    
}