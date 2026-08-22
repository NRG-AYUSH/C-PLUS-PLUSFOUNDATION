#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string accountHolder;
    double balance;
    int pin;

public:
    // Constructor
    BankAccount(string name, double amount, int pin1)
    {
        accountHolder = name;
        if (amount < 0)
        {
            balance = 0.0;
        }
        else
        {
            balance = amount;
        }
        pin = pin1;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Successfully deposited $" << amount << endl;
        }
        else
        {
            cout << "ERROR: INVALID AMOUNT ENTERED" << endl;
        }
    }

    void withdraw(double amount, int enteredPin)
    {
        if (enteredPin == pin)
        {
            if (balance >= amount)
            {
                balance -= amount;
                cout << "Successfully withdrew $" << amount << endl;
            }
            else
            {
                cout << "Error: Insufficient balance!" << endl;
            }
        }
        else
        {
            cout << "Error: INVALID PIN ENTERED" << endl;
        }
    }

    void setPin(int oldPin, int newPin)
    {
        if (oldPin == pin)
        {
            if (newPin >= 1000 && newPin <= 9999)
            {
                pin = newPin;
                cout << "PIN successfully changed!" << endl;
            }
            else
            {
                cout << "Error: New PIN must be 4 digits!" << endl;
            }
        }
        else
        {
            cout << "Error: Incorrect old PIN!" << endl;
        }
    }

    double getBalance(int enteredPin)
    {
        if (pin == enteredPin)
        {
            return balance;
        }
        else
        {
            cout << "Error: Incorrect PIN!" << endl;
            return -1.0; // Return negative value to indicate error
        }
    }

    string getAccountHolder()
    {
        return accountHolder;
    }
};

int main()
{
    BankAccount userAcc("Ayush", 5000.0, 1234);

    // Test Invalid PIN Withdrawal
    userAcc.withdraw(100.0, 1235);

    // Test PIN Change
    userAcc.setPin(1234, 7890);

    // Check Balance with New PIN
    cout << "Current Balance: $" << userAcc.getBalance(7890) << endl;

    return 0;
}