#include<stdio.h>
/*
Name: Sachin Belavi
Date: 19/08/2023
Title:WAP to check if number is perfect or not
Sample Input:Enter a number: 6
Sample Output:Yes, entered number is perfect number
*/

int main()
{
      int num,per = 0;                     //initialize the num
      printf("Enter a number: ");        //taking the value of from user
      scanf("%d", &num);                  
      if(num > 0 )                           //condition for entered value is greater than 0 or positive number
      {
            for(int i=1;i<num;i++)            //run a loop upto entered number
            {
                  if(num % i == 0)             //condition for finding divisible facters

                  {
                        per = per + i;              //addition operation for divisible factors  

                  }
            }
            if( per == num)                        //condition for add of all divisible factor is equal to entered number
            {
                  printf("Yes, entered number is perfect number");
            }

            else
            {
                  printf("No, entered number is not a perfect number");
            }

      }
      else
      {
            printf("Error : Invalid Input, Enter only positive number");
          
      }
}