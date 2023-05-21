// Write a program to convert farehonhite to celsius 

#include <iostream>
using namespace std;
int main(){
    float fahr;
    cin>>fahr;
    float celcius=(5.0/9)*(fahr-32);
    cout<<"fahr"<<" "<<fahr<<" "<<"to"<<celcius<<"c";
}