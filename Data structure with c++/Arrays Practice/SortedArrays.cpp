// Check array is sorted ot not
#include <iostream>
using namespace std;
bool sorted(int arr[],int n)
{
   
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];
    //Taking inputs 

    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int sort = (sorted(arr,size) == false);
    
    if(sort)
    {
        cout<<"Arrays is sorted";
    }
    else
    {
        cout<<"Arrays is not sorted";
    }
    return 0;
}


