#include <iostream>
#include "Acc_class.h"
using namespace std;

void Account::transferByReference(Account &acc, int fromIndex, int toIndex, float amount) {
    if (acc.balances[fromIndex] >= amount) {
        acc.balances[fromIndex] -= amount;
        acc.balances[toIndex] += amount;
        acc.display();
    } else {
        cout << "Insufficient balance! Transfer Failed..." << endl;
    }
}
