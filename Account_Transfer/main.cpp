#include <iostream>
#include<string>
#include "Acc_class.h"
using namespace std;

int main() {
    Account person1("Indranil");

    person1.addAccount(0, 1001, 5000.0);
    person1.addAccount(1, 1002, 10000.5);

    cout << "Before Transfer:\n";
    person1.display();

    //Both pass by address and reference will change the original
    //So show output to Ma'am after commenting out each at a time

    cout << "\nAfter Transfer by Value:\n";
    person1.transferByValue(person1, 1, 0, 200);
    cout << "\nOriginal After Transfer by Value:\n";
    person1.display();

    cout << "\nAfter Transfer by Address:\n";
    person1.transferByAddress(&person1, 1, 0, 200);
    cout << "\nOriginal After Transfer by Address:\n";
    person1.display();

    cout << "\nAfter Transfer by Reference:\n";
    person1.transferByReference(person1, 1, 0, 200);
    cout << "\nOriginal After Transfer by Reference:\n";
    person1.display();

    return 0;
}
