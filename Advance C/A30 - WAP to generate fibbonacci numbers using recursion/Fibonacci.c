#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title:WAP to generate fibbonacci numbers using recursion
Sample Input:Enter a number: 8
Sample Output: 0, 1, 1, 2, 3, 5, 8
*/

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    positive_fibonacci(limit, 0, 1, 0);
}
void positive_fibonacci(int limit,int n1,int n2,int fib)
{
  if(limit < 0)
    {
        printf("Invalid input\n");
    }
        //iteration depends on limt
    while(fib <= limit)
    {
        printf("%d,",fib);

            //below operation is swaping
        n1 = n2;
        n2 = fib;
        fib = n1 + n2;
    }
}