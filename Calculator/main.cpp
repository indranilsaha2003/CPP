#include <iostream>
#include "header.h"
using namespace std;

int main(){
    calculator obj1;
    int inp1;
    int inp2;
    cout << "Enter first number: ";
    cin >> inp1;
    cout<<"enter second number: ";
    cin>>inp2;

    char choice;
    do{
        cout<<"MENU: "<<endl;
        cout<<"1. Addition "<<endl;
        cout<<"2. Division "<<endl;
        cout<<"3. Multiplication "<<endl;
        cout<<"4. Division "<<endl;
        cout<<"5. Quit "<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch (choice) {
            case '1':
                obj1.addDigits( inp1, inp2 );
                break;
            case '2':
                obj1.subtractDigits( inp1, inp2 );
                break;
            case '3':
                 obj1.mulDigits( inp1, inp2 );
                 break;
            case '4':
                obj1.divDigits( inp1, inp2 );
                break;
            case '5':
                cout<<"exiting....."<<endl;
        }
    }while(choice!='q' && choice!='Q');
    return 0;
}
