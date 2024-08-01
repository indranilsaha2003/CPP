#include<iostream>
using namespace std;

class addNum{
    private:
        int a;
        int b;
    public:
        addNum(int num1, int num2){
            a = 0;
            b = 0;
            a = num1;
            b = num2;
            cout << "The sum is : " << a+b << endl;
        }
};

int main(){
    int n1, n2;
    cout << "Enter the first no. : " << endl;
    cin >> n1;
    cout << "Enter the second no. : " << endl;
    cin >> n2;
    addNum obj(n1,n2);
    return 0;
}
