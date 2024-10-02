#include <stdio.h>
/*
Name: Sachin Belavi
Date: 07/09/2023
Title:WAP to implement your own isxdigit() function
Sample Input:Enter the character: a
Sample Output: Entered character is an hexadecimal digit
*/

int is_xdigit(int);

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    if (ret == 1)
    {
       printf("Entered character is  an hexadecimal digit");  //if condition true print this message
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");   //if condition flase print this message
    }
    
    return 0;
}

int is_xdigit(int ch)
{
if((ch >= 'A' && ch <= 'F' ) || (ch >= 'a' && ch <= 'f') || (ch >= '0' && ch <= '9'))   //to get result
{
    return 1;
}
else
{
return 0;  
}
}