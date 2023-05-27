// search element in arrays
#include <iostream>
using namespace std;

bool linearsearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    int size;
    cout<<"Enter the size of arrays :";
    cin>>size;

    int key;
    cout<<"Enter the key values : ";
    cin>>key;

    int arr[size];
    cout<<"Enter the array values : ";

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    if (linearsearch(arr,size,key))
    {
        cout<<"key Value found";
    }
    else
    {
        cout<<"Key value Not found";
    }
    
}