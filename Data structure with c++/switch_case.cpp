#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a first number ="<<endl;
    cin>>a;
    int b;
    cout<<"Enter a Second number = "<<endl;;
    cin>>b;
    char op;
    cout<<"Enter an operation + ,-,/,*"<<endl;
    cin>>op;
    switch (op)
    {
    case '+': cout<<(a+b)<<endl;
        break;
    case '-': cout<<(a-b)<<endl;
        break;
    case '/': cout<<(a/b)<<endl;
        break;
    case '*': cout<<(a*b)<<endl;
        break;
    default:
        break;
    }

    
    }