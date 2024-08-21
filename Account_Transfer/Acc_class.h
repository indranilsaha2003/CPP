#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string owner;
    int accountNumbers[2];
    float balances[2];

    Account(string name) {
        owner = name;
        for (int i = 0; i < 2; ++i) {
            accountNumbers[i] = 0;
            balances[i] = 0.0f;
        }
    }

    void addAccount(int index, int accNo, float balance) {
        if(index >= 0 && index < 2) {
            accountNumbers[index] = accNo;
            balances[index] = balance;
        }
    }

    void transferByValue(Account acc, int fromIndex, int toIndex, float amount);
    void transferByAddress(Account *acc, int fromIndex, int toIndex, float amount);
    void transferByReference(Account &acc, int fromIndex, int toIndex, float amount);

    void display() {
        cout << "Account balances of " << owner << ":\n";
        for (int i = 0; i < 2; ++i) {
            if (accountNumbers[i] != 0) {
                cout << "Account No: " << accountNumbers[i] << ", Balance: " << balances[i] << "\n";
            }
        }
    }
};
