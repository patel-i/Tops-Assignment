#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    // Function to assign values
    void assignValues()
    {
        cout << "Enter Depositor Name: ";
        cin.ignore();
        getline(cin, depositorName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Type (Saving/Current): ";
        cin >> accountType;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit amount
    void depositAmount()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw amount
    void withdrawAmount()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "\nDepositor Name : " << depositorName << endl;
        cout << "Balance Amount : " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.assignValues();
    acc.depositAmount();
    acc.withdrawAmount();
    acc.display();
}