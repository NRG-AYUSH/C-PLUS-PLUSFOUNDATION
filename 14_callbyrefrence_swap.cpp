#include <iostream>
using namespace std;

void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "\n--- BEFORE SWAPPING ---" << endl;
    cout << "Value of a: " << *ptrA << " | Address: " << ptrA << endl;
    cout << "Value of b: " << *ptrB << " | Address: " << ptrB << endl;

    swapValues(ptrA, ptrB);

    cout << "\n--- AFTER SWAPPING ---" << endl;
    cout << "Value of a: " << *ptrA << " | Address: " << ptrA << endl;
    cout << "Value of b: " << *ptrB << " | Address: " << ptrB << endl;

    return 0;
}