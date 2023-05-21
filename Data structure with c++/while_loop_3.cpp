#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number "<<" ";
    cin>>n;
    int i=2;
    int sum=0;
    while (i<=n)
    {
        if(i%2==0)
        sum=sum+i;
        i=i+1;
    }
    cout<<"the sum is 1 to"<<n<<"="<<sum;
    

}