// Write a program to check prime number from 1 to n

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<n)
    {
        if(n%i==0){
            cout<<"Number is not prime "<<i<<"\n";
        }
        else
        {
        cout<<"Number is prime "<<i<<"\n";
        }
        i=i+1;
    }
}