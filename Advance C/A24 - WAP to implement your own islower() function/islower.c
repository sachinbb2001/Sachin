#include <stdio.h>
/*
Name: Sachin Belavi
Date: 07/09/2023
Title:WAP to implement your own isower() function
Sample Input:Enter the character: a
Sample Output: Entered character is lower case alphabet
*/


int my_islower(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    if(ret == 1)
    {
        printf("Entered character is lower case alphabet");
    }
    else
    {
        printf("Entered character is not lower case alphabet");
    }
}
int  my_islower(int ch)
{
    if(ch >= 'a' && ch <= 'z')     //print whether ch is lower case alphabet or not
    {
       return 1;
    }
    else
    {
       return 0;
    }
}