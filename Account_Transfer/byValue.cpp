#include <iostream>
#include "Acc_class.h"
using namespace std;

void Account::transferByValue(Account acc, int fromIndex, int toIndex, float amount) {
    if (acc.balances[fromIndex] >= amount) {
        acc.balances[fromIndex] -= amount;
        acc.balances[toIndex] += amount;
    } else {
        cout << "Insufficient balance! Transfer Failed..." << endl;
    }
    acc.display();
}
