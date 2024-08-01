#include "Thinker.h"
#include <string.h>
#include <iostream>
using namespace std;

void thinking_cap::slots(char new_green[], char new_red[])
{
    if (strlen(new_green) > 50)
    {
        cout << "Warning: new_green string is too long. Truncating to 50 characters." << endl;
        new_green[50] = '\0'; // Truncate the string to 50 characters
    }
    if (strlen(new_red) > 50)
    {
        cout << "Warning: new_red string is too long. Truncating to 50 characters." << endl;
        new_red[50] = '\0'; // Truncate the string to 50 characters
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

