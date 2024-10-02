/*------------------------------------------------------------------------------------------------- 
 *   Author         : Sachin
 *   File           : 020_example.cpp
 *   Title          : Abstract class
 *   Description    : This program demonstrates the conflicts between global and local variable 
 *                    when the name is same.             
 *-----------------------------------------------------------------------------------------------*/


#include <iostream>

using namespace std;

int x = 10;

int main()
{
    double x = 15.5;
    cout << x << endl; // How to get the global x refernce here

    return 0;
}
