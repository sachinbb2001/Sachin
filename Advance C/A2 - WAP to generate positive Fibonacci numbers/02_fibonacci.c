#include<stdio.h>
/*
Name: Sachin Belavi
Date: 17/08/2023
Title:WAP to generate positive Fibonacci numbers
Sample Input:Enter a number: 8
Sample Output:0 1 1 2 3 5 8
*/
int main()
{
    int num1,num2,num3,fib;   //Declaring the variables

    //initialise variables
    num2 = 0;
    num3 = 1;
    fib = 0;

    //print below line for user to understand 
    printf("Enter a number: \n");

    //read input from user
    scanf("%d",&num1);

    //check condition for given number is posotive or negative
    if(num1 >= 0)
    {
        //iteration depends on num1
        while(fib <= num1)
        {
            //it prints the positive fibanocci series
            printf("%d ",fib);

            //below operation is swaping
            num2 = num3;
            num3 = fib;
            fib = num2 + num3;
        }
    }
    else
    {
        printf("Invalid input\n");   ///it prints when the given number is negetive
    }
}