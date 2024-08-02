#include <iostream>
#include <stdlib.h>
using namespace std;

class shape{
protected:
    int length;
public:
    void input()
    {
        cout<<"Enter the length:";
        cin>>length;
    }
};

class square:public shape
{
public:
    void areaSq()
    {
        shape::input();
        cout<<"Area of square = "<<length*length << endl;
    }
};

class rect:public shape
{
private:
    int breadth;
public:
    void areaRect()
    {
        shape::input();
        cout<<"Enter breadth:";
        cin>>breadth;
        cout<<"Area of Rectangle = "<<length*breadth << endl;
    }
};
int main()
{
    square obj1;
    cout << "For Square:" << endl;
    obj1.areaSq();
    rect obj2;
    cout << "\nFor Rectangle:" << endl;
    obj2.areaRect();
    return 0;
}
