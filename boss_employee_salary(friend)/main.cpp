#include <iostream>
using namespace std;

class Employee {
private:
    static int count;
    int id;
    string name;
    int age;
    double salary;

public:
    Employee() {
        id = ++count;
    }

    void Details() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee age: ";
        cin >> age;
        salary = 0;
    }

    void display() {
        cout << endl;
        cout << "Employee ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Incremented Salary : " << salary << endl;
    }

    friend void increaseSalary(Employee&, int);
    friend void setSalary(Employee&, double);
};

int Employee::count = 0;

void increaseSalary(Employee& e, int increment) {
    e.salary += increment;
}

void setSalary(Employee& e, double sal) {
    e.salary = sal;
}

class Boss {
public:
    void Month(Employee &e) {
        double sal;
        cout << "Enter salary: ";
        cin >> sal;
        setSalary(e, sal);
        int increment;
        cout << "Enter increment: ";
        cin >> increment;
        increaseSalary(e, increment);
    }
};

int main() {
    Employee e;
    e.Details();
    Boss d;
    d.Month(e);
    e.display();
    return 0;
}
