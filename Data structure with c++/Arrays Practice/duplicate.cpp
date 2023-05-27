// find the duplicate in arrays

#include <iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,1,2,4};
    int n =5;
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j< n; j++)
    {
        if (arr[i]==arr[j])
        {
            cout<<"Duplicate Arrays found : "<<arr[i];
            break;
        }
        
    }
   
    }
   return 0; 
}