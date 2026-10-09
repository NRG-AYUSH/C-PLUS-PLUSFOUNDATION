#include <iostream>
using namespace std;
int main()
{
    int digit,number,a=0;
    cout<<"enter a number here"<<endl;
    cin>>number;
    while(number>0)
{
    digit=number%10;
    if(digit>=a)
    {
        a=digit;
    }
    number=number/10;
}
cout<<"the greatest digit is"<<a<<endl;
}
