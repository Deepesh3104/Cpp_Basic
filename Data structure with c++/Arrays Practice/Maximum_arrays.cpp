// find maximum in arrays
#include <iostream>
#include <limits>
using namespace std;

int findmaxi(int arr[],int n)
{
    int maxi =INT16_MIN;
   for(int i = 0; i < n; i++)
   {
        maxi=max(maxi,arr[i]);
   }
   return maxi;
   
}

int main ()
{
    int size ;
    cout << "Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the values of arrays :";

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<findmaxi(arr,size);
}