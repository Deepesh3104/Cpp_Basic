#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int count =0;
    int arr[5]={2,8,3,0,0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
    }
    cout<<"The total Number of zero in array :"<<count<<" ";
}