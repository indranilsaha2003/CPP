#include "Thinker.h"

int main()
{
    thinking_cap student;
    thinking_cap fan;

    student.slots("Hello", "Goodbye");
    fan.slots("Go Team!", "Boo!");

    student.push_green();
    fan.push_green();
    student.push_red();
    fan.push_red();
}
