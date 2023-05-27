//Swapping the elements in arrays 
#include <iostream>
#include <limits>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end --;
    }
    
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the values of array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i];
    }

    
}