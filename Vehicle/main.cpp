#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Vehicle
{
protected:
    string name;
    double distance;
    double fuel;

public:
    void input()
    {
        cout << "Enter The Name : ";
        cin >> name;
        cout << "Enter The Distance(in km) : ";
        cin >> distance;
        cout << "Enter The Fuel(in L) : ";
        cin >> fuel;
    }

    void displayDetails()
    {
        cout << "Name Is : " << name << endl;
        cout << "Mileage Is : " << distance / fuel << "km" << endl;
    }
};

class TwoWheeler : public Vehicle
{
private:
    int price;

public:
    void bike()
    {
        Vehicle ::input();
        Vehicle ::displayDetails();
        cout << "Enter The price of Two Wheeler : ";
        cin >> price;
        cout << "The Price Of Two Wheeler Is : " << price << endl;
    }
};

class FourWheeler : public Vehicle
{
private:
    int cost;

public:
    void car()
    {
        Vehicle ::input();
        Vehicle ::displayDetails();
        cout << "Enter The price Of Four Wheeler : ";
        cin >> cost;
        cout << "The Price of Four Wheeler is : " << cost << endl;
    }
};

int main()
{
    TwoWheeler obj1;
    FourWheeler obj2;
    int choice;
    while (1)
    {
        cout << "\n1 --> Two Wheeler \n2 --> Four Wheeler\n3 --> Exit\nEnter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj1.bike();
            break;
        case 2:
            obj2.car();
            break;
        case 3:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid Choice... Enter again\n" << endl;
            break;
        }
    }
    return 0;
}
