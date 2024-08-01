#include <iostream>
#include "header.h"
using namespace std;

void calculator::divDigits(int n1,int n2){
    num1=n1;
    num2=n2;
    if (n2 != 0) {
        cout << "The result of dividing " << n1 << " by " << n2 << " is: " << static_cast<float>(num1)/num2 <<endl;
    }

}
