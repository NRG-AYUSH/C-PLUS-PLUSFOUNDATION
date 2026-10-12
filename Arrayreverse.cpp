#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of the array" << endl;
    cin >> size;
    int arr[size];
    int temp;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number" << endl;
        cin>>arr[i];
    }
    for (int j = 0; j < size / 2; j++)
    {
        temp = arr[size - 1 - j];
        arr[size - 1 - j] = arr[j];
        arr[j] = temp;
    }
    for (int k = 0; k < size; k++)
    {
        cout << "The new array after reversal is"
             << arr[k] << endl;
    }
}