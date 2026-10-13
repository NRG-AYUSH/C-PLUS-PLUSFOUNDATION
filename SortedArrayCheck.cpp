#include <iostream>
using namespace std;
int main()
{
    int flag=0;
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter a number in sorted way";

    for(int i=0;i<size;i++)
    {
        cout<<"Enter a Number";
        cin>>arr[i];
    }
    //checking for the sorted array
    for(int j=0;j<size;j++)
    {
        if(arr[j]>arr[j+1])
        {
            flag=-1;
            break;
        }
    }
if(flag==-1)
{
    cout<<"The array is not sorted"<<endl;
}
else
{
    cout<<"The array is sorted\n";
}
}