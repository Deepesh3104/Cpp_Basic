#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your first number:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter your second number to power:"<<endl;
    cin>>b;
    int ans=1;
    for (int  i = 1; i <=b; i++)
    {
        ans=ans*a;
    }
    cout<<"Answer="<<ans;
    
}