#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to the sum";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"The sum of the numbers is "<<sum;
}