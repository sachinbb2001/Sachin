/*------------------------------------------------------------------------------------------------- 
 *   Author         :Sachin
 *   File           : 006_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the sizeof operator with class and structure.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
    string name;
    string address;
};

class cEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    cout << "sizeof emp1 is " << sizeof(emp1) << endl;
    cout << "sizeof emp2 is " << sizeof(emp2) << endl;

    return 0;
}
