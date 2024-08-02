#include <iostream>
#include <stdlib.h>
#include "header.h"
using namespace std;

int main()
{
    calculator obj1;
    int inp1;
    int inp2;
    int choice;
    while(1)
    {

        cout << "MENU: " << endl;
        cout << "1. Add[+] " << endl;
        cout << "2. Subtract[-] " << endl;
        cout << "3. Multiplication[*] " << endl;
        cout << "4. Division[/] " << endl;
        cout << "5. Quit " << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice<5 && choice>0){
            cout << "Enter first number: ";
            cin >> inp1;
            cout << "enter second number: ";
            cin >> inp2;
        }

        switch (choice)
        {
        case 1:
            obj1.addDigits(inp1, inp2);
            break;
        case 2:
            obj1.subtractDigits(inp1, inp2);
            break;
        case 3:
            obj1.mulDigits(inp1, inp2);
            break;
        case 4:
            obj1.divDigits(inp1, inp2);
            break;
        case 5:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid choice! Enter again...\n" << endl;
            break;
        }
    }
    return 0;
}
