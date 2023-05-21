#include <iostream>
using namespace std;
int even (int a)
{
    if (a % 2 == 0)
    {
        cout<<"Number is even";
    }
    else
    {
        cout<<"Number is odd";
    }
    return a;
}
int main()
{
    int a;
    cout<<"Enter a number :"<<" ";
    cin>>a;
    int answer=even(a);
    cout<<" "<<answer;
    return 0;
}