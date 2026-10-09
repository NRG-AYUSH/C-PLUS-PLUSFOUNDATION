#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number here: ";
    cin >> num;

    if (num <= 1) {
        cout << "The number is not Perfect" << endl;
        return 0;
    }

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << "The given number is a Perfect number" << endl;
    } else {
        cout << "The number is not Perfect" << endl;
    }

    return 0;
}