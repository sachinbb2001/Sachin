#include<stdio.h>
/*
Name: Sachin Belavi
Date: 30/08/2023
Title:WAP to check N th bit is set or not, If yes, clear the M th bit
Sample Input:Enter the value of 'n' : 
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Sample Output: Updated value of num is 3 
*/

int main()
{
    int num, N, M;           //read value from user
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter 'N' : ");  //Enter the N value
    scanf("%d", &N);
    printf("Enter 'M' : ");  //enter the M value
    scanf("%d", &M);
    if (num & (1 << N))   //condition to check the N th bit is set or not
    {
        num = (num & ~(1 << M));  //condition for clear the M th nit
        printf("Updated value of num is %d",num);     //print Updated value of number
    }
    else
    {
        printf("Updated value of num is %d",num);   ////print Updated value of number
    }
}