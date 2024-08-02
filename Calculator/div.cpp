#include <iostream>
#include "header.h"
using namespace std;

void calculator::divDigits(int n1,int n2){
    num1=n1;
    num2=n2;
    if (n2==0){
        cout << "ERROR: Division by zero!" << "\n" << endl;
    }
    else{
        cout << "The Result is: " << static_cast<float>(num1)/num2 << "\n" <<endl;
    }
}
