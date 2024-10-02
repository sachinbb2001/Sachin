#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title: WAP to generate negative fibbonacci numbers using recursion
Sample Input:Enter a number: -10
Sample Output:0, 1, -1, 2, -3, 5, -8
*/

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci(limit, 0, 1, 0);
}
void negative_fibonacci(int num,int n1,int n2,int fib)
{
    if(num > 0)
    {
        printf("Invalid input\n");
    }
        //iteration depends on num
    while(fib >= num && fib <= (-num))
    {
            //it prints the negative fibanocci series
            printf("%d ",fib);

            //below operation is swaping
            n1 = n2;
            n2 = fib;
            fib = n1 - n2;
    }
}