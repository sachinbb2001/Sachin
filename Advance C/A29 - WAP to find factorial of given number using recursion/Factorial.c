#include <stdio.h>
/*
Name: Sachin Belavi
Date: 17/09/2023
Title: WAP to find factorial of given number using recursion
Sample Input: Enter the value of N : 5
Sample Output: Factorial of the given number is 120
*/
int main()
{
    //declaring and intializing variables
    static int num;  
    static int flag=0;
    static unsigned long long int fact = 1;
    if(flag == 0)
    {
        printf("Enter the value of N : ");   //enter number from user
        scanf("%d",&num);
        flag = 1;
    }
    if(num < 0)   //condition to check number is negative or not
    {
        printf("Invalid Input");
    }
    else if(num <= 0)
    {
        printf("Factorial of the given number is %lld\n",fact);
    }
    else
    {
        fact = fact * num;  //factrorial formula
        num--;
    main();
    }
}