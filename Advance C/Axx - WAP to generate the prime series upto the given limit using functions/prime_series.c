#include <stdio.h>
/*
Name: Sachin Belavi
Date: 17/09/2023
Title:WAP to generate the prime series upto the given limit using functions
Sample Input:Enter a number: 4
Sample Output:2 3
*/

int is_prime(int);

void generate_prime(int);

int main()
{
    int limit;
    
    printf("Enter the limit: ");  //take limit from user
    scanf("%d", &limit);
    
    if (limit > 1)
    {
       generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}
int is_prime(int n)                   
{
    int flag=0;
    for(int i = 2; i <= n/2; i++)
    {
        if( n % i == 0)                  //prime number expression
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)           // if flag is equal to 0 then return prime number 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void generate_prime(int limit)          
{
    int flag = 0;
    for(int i = 2 ; i <= limit; i++)
    {
        flag = 0;
        for(int j = 2;j < i; j++)
        {
            if(i % j == 0)
            {
                flag ++;
            }
        }
        if(flag == 0)
        {
        printf("%d ", i);
        }
    }
}
 