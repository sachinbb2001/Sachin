#include <stdio.h>
/*
Name: Sachin Belavi
Date: 06/09/2023
Title:WAP to implement your own isalnum() function
Sample Input:Enter the character: a
Sample Output: The character 'a' is an alnum character.
*/

int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    
    if(ret == 1)
    {
         printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character"); 
    }
}
int my_isalnum(int ch)
{
    if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
    return 1;
    }
    else
    {
        return 0;  
    }
}
