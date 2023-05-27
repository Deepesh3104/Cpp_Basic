// Decrement the values in arrays & // Increment the values in arrays 
#include <iostream>
using namespace std;

int main()
{
    int a ;
    int size;
    cout<<"Enter the size of arry";
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]-1;  //--> for decrement and for increment  ( arr[i]=arr[i]-1; )
        cout<<arr[i]<<" ";
    }
    
}