#include <iostream>
using namespace std;

int counting(int n)
{
     for (int i = 0; i <=n; i++)
    {
        cout<<i<<" ";
    }cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number to print counting ";
    cin>>n;
    counting(n);
    

}