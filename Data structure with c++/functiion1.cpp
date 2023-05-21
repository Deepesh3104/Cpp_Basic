#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans=1;
    for (int i = 1; i <= b; i++)
    {
        ans=ans*a;
    }
    return ans; 
}
int main()
{
    int a;
    cout<<"Enter a first number:"<<" ";
    cin>>a;
    int b;
    cout<<"Enter a second number:"<<" ";
    cin>>b;
    int answer=power(a,b);
    cout<<a<<" to the power of "<<b<<" is "<<answer;
    return 0;
}