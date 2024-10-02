#include<stdio.h>
/*
Name: Sachin Belavi
Date: 17/08/2023
Title:WAP to generate negative Fibonacci numbers
Sample Input:Enter a number: -8
Sample Output:0 1 -1 2 -3 5 -8
*/

int main()
{
    //Declaring the variables
    int num1,num2,num3,fib;

    //initialise some variables
    num2 = 0;
    num3 = 1;
    fib = 0;

    //print below line for user understanding
    printf("Enter a number: \n");

    //read input from user
    scanf("%d",&num1);

    //check condition for given number is posotive or negative
    if(num1 <= 0)
    {
        //iteration depends on num1
        while(fib >= num1)
        {
            //it prints the negative fibanocci series
            printf("%d ",fib);

            //below operation is swaping
            num2 = num3;
            num3 = fib;
            fib = num2 - num3;
        }
    }
    else
    {
        //it prints when the given number is positive
        printf("Invalid input\n");
    }
}