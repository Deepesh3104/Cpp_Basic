#include <iostream>
using namespace std;
int prime(int n)
{  
    if(n%2==0){
        return 0;
    }
    return 1;       
}        
int main()
{
    int n;
    cout<<"Enter a number to check";
    cin>>n;
    if(prime(n))
    {
        cout<<"prime number";
    }
    else{
        cout<<"not prime";
    }
    return 0;

}