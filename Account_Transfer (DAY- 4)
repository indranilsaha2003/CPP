#include <iostream>
using namespace std;

class Account {
private:
    int acc;
    int balance;

public:
    void input()
    {
        cout << "Enter account number: ";
        cin >> acc;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() const
    {
        cout << "\nACCOUNT DETAILS :-" << endl;
        cout << "Account Number: " << acc << endl;
        cout << "Balance: " << balance << endl;
    }

    void transferByValue(Account acc, int amt)
    {
        if (balance >= amt) {
            balance -= amt;
            acc.balance += amt;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void transferByAddress(Account* acc, int amt)
    {
        if (balance >= amt) {
            balance -= amt;
            acc->balance += amt;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void transferByReference(Account& acc, int amt)
    {
        if (balance >= amt) {
            balance -= amt;
            acc.balance += amt;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    int getAccountNumber() const
    {
        return acc;
    }
};

int main()
{
    int n, amount, choice, ip1, ip2;
    int a = -1, b = -1;

    cout << "Enter the number of accounts: ";
    cin >> n;

    Account* accounts = new Account[n]; 
    int* accountNumbers = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "For Account " << i + 1 << endl;
        accounts[i].input();
        accountNumbers[i] = accounts[i].getAccountNumber();
    }

    do {
        for (int i = 0; i < n; i++) {
            accounts[i].display();
        }

        cout << "\nEnter amount to be transferred: ";
        cin >> amount;
        cout << "Enter the account number of the sender: ";
        cin >> ip1;
        cout << "Enter the account number of the receiver: ";
        cin >> ip2;

        for (int i = 0; i < n; i++) {
            if (accountNumbers[i] == ip1)
                a = i;
            if (accountNumbers[i] == ip2)
                b = i;
        }

        if (a == -1 || b == -1) {
            cout << "Invalid account number" << endl;
            continue;
        }

        cout << "\nSelect :\n1: Transfer by value\n2: Transfer by address\n3: Transfer by reference\nEnter choice : ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Transfer by value:...." << endl;
            accounts[a].transferByValue(accounts[b], amount);
            break;
        case 2:
            cout << "Transfer by address:...." << endl;
            accounts[a].transferByAddress(&accounts[b], amount);
            break;
        case 3:
            cout << "Transfer by reference:...." << endl;
            accounts[a].transferByReference(accounts[b], amount);
            break;
        }
    } while (choice != 0);

    delete[] accounts;
    delete[] accountNumbers;

    return 0;
}
