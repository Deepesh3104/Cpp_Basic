#include <iostream>
using namespace std;
int main() {
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n500;
    n1=n2=n5=n10=n20=n50=n100=n500=0; 
    cout<<"Enter the amount to count the note: ";
    cin>>amount;
    switch (amount>=500)
    {
        case 1: n500=amount/100;
        amount-=n500*500;
        break;
    }
    switch (amount>=100)
    {
    case 1:
        n100=amount/100;
        amount-=n100*100;
        break;
    }
    switch (amount>=50)
    {
    case 1:
        n50=amount/50;
        amount-=n50*50;
        break;
    }
    switch (amount>=20)
    {
        case 1:
        n20=amount/20;
        amount-=n20*20;
        break;
    }
    switch (amount>=10)
    {
        case 1:
        n10=amount/10;
        amount-=n10*10;
        break;
    }

    cout<<"500 Rupee notes is :"<<n500<<endl;
    cout<<"100 Rupee notes is :"<<n100<<endl;
    cout<<"50 Rupee notes is :"<<n50<<endl;
    cout<<"20 Rupee notes is :"<<n20<<endl;
    cout<<"10 Rupee notes is :"<<n10<<endl;
}