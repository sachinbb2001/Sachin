#include <stdio.h>
/*
Name: Sachin Belavi
Date: 07/09/2023
Title:WAP to implement your own ispunct() function
Sample Input:Enter the character: a
Sample Output: Entered character is punctuation character
*/

int my_ispunct(int);

int main()
{
    char ch;
    int ret;
    
   // printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    if(ret == 1)
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
}
int my_ispunct(int ch)
{
    if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}