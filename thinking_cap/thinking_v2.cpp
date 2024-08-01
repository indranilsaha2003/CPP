#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;

class thinking_cap
{
public:
    void slots(char new_green[], char new_red[]);
    void push_green() const;
    void push_red() const;

private:
    char green_string[50];
    char red_string[50];
};

void thinking_cap::slots(char new_green[], char new_red[])
{
    if (strlen(new_green) > 50)
    {
        cout << "Error: new_green string is too long." << endl;
        exit(1);
    }
    strcpy(green_string, new_green);
    strcpy(red_string, new_red);
}

void thinking_cap::push_green() const
{
    cout << green_string << endl;
}

void thinking_cap::push_red() const
{
    cout << red_string << endl;
}

int main()
{
    thinking_cap student;
    thinking_cap fan;
    student.slots("Hello", "Goodbye");
    fan.slots("Go Team!", "Boo!");
    student.push_green();
    fan.push_green();
    student.push_red();

    return 0;
}
