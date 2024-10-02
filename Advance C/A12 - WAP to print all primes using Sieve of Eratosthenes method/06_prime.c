#include<stdio.h>
/*
Name: Sachin Belavi
Date: 03/09/2023
Title:WAP to print all primes using Sieve of Eratosthenes method
Sample Input:Enter the value of 'n' : 20
Sample Output:The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

int main()
{
    int num, i, j;                      //Take number from user
    printf("Enter the value of 'n' : ");  
    scanf("%d", &num);
    if(num > 1)                         //if condition to check given number is greater than 1 or not
    {
        int P[num + 1];          //Declaring the array variables
        for(i = 2; i < num; i++)      
        {
        P[i] = i;                //storing value in array
        }
        
        i=2;                   
        
        while((i * i) <= num)  //while loop runs upto value of num
        {
            if(P[i] != 0)  //condition to check array elements are not equal too zero
            {
                for(j = 2; j < num; j++)   //condition to replace the nonprime numbers with zero in array
                {
                    if(P[i] * j > num)
                    {
                        break;
                    }
                    else
                    {
                        P[P[i] * j] = 0;   //it is replace the nonprime numbers with zero 
                    }
                }
            }
            i++;
        }
        
        printf("The primes less than or equal to %d are : ", num );
        
        for(i = 2; i < num; i++) 
         {
             if(P[i] !=0)
             {
                 printf("%d",P[i]);
                 if(i < (num - 1))
                 {
                     printf(",");
                 }
             }
         }
    }
    else
    {
    printf("Please enter a positive number which is > 1:\n");
    }
}