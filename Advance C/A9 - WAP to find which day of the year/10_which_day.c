#include<stdio.h>
/*
Name: Sachin Belavi
Date: 03/09/2023
Title:WAP to find which day of the year
Sample Input:Enter a number: 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
Sample Output:The day is Tuesday
*/

int main()
{
    int n,day,op;                            //take n value from the user
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);
    if(n > 0 && n <= 365)                   //condition to check given number is between 0 and 365
    {
        printf("Choose First Day :\n 1. Sunday\n 2. Monday\n 3. Tuesday\n 4. Wednesday\n 5. Thursday\n 6. Friday\n 7. Saturday\n");
        printf("Enter the option to set the first day : ");
        scanf(" %d", &op);
        if(op > 0 && op <= 7)    //condition to check given option is between 0 and 7
        {
           day = n + op - 1;     //expression to find day
           day = day % 7;
           switch(day)          //with the help of case we print the day
           {
               case (1):
               printf("The day is Sunday\n");
               break;
    
               case (2):
               printf("The day is Monday\n");
               break;
             
               case (3):
               printf("The day is Tuesday\n");
               break;
             
               case (4):
               printf("The day is Wednesday\n");
               break;
             
               case (5):
               printf("The day is Thrusday\n");
               break;
             
               case (6):
               printf("The day is Friday\n");
               break;
         
               case (0):
               printf("The day is Saturday\n");
               break;
           }
        }
           else
           {
               printf("Error: Invalid input, first day should be > 0 and <= 7");   //if  option is not in between 0 and 7 print error message
           }
        }
        else
        {
           printf("Error: Invalid Input, n value should be > 0 and <= 365");     //if entered number is not in between 0 and 365 print error message
        }
    return 0;
}