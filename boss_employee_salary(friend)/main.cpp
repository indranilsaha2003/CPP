#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;
    int id;
    string name;
    int age;
    double salary;

public:
    Employee()
    {
        id = ++count;
        salary = 0;
    }

    void Details()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee age: ";
        cin >> age;
        salary = 0;
    }

    void display()
    {
        cout << endl;
        cout << "Employee ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Incremented Salary : " << salary << endl;
    }

    friend class Boss;
};

int Employee::count = 2000;

class Boss
{
public:
    void increaseSalary(Employee &e, int increment)
    {
        e.salary+= e.salary * increment / 100;
    }

    void setSalary(Employee &e, double sal)
    {
        e.salary = sal;
    }

    void Month(Employee &e)
    {
        double sal;
        cout << "Enter salary: ";
        cin >> sal;
        setSalary(e, sal);
        int increment;
        cout << "Enter increment(in %): ";
        cin >> increment;
        increaseSalary(e, increment);
    }
};

int main()
{
    Employee e;
    e.Details();
    Boss d;
    d.Month(e);
    e.display();
    return 0;
}
