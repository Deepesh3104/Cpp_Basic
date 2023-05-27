// Find the sum of arrys
#include <iostream>
#include <limits>
using namespace std;


int main()
{
    int sum =0;
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the values of array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        sum =sum+arr[i];
    }
    cout<<sum;

    
}