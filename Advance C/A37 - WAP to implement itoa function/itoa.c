#include <stdio.h>
/*
Name: Sachin Belavi
Date: 10/13/2023
Title:WAP to implement itoa function
Sample Input:Enter the number : 1234
Sample Output: Integer to string is 1234
*/


void itoa(int num, char str[]);

int main()
{
    int num,ret;
    char str[10];
    
    printf("Enter the number:");
    ret = scanf("%d", &num);
    
    itoa(num, str);
    if(ret == 0)
    {
        printf("Integer to string is %d\n", ret);
    }
    else
    {
    printf("Integer to string is %s", str);
    }
}
  
void itoa(int num, char *str)   
{
    int rev = 0, mod, var, mod1, num1;
    num1 = num;
    if (num < 0)                
    {                    
        *str = '-' + 0;                    
        num = -num;                    
        str++;                
    }                
    while (num > 0)                   
    {                            
        mod = num % 10;                        
        rev = (rev * 10) + mod;                        
        num = num / 10;                    
    }                
    while (rev > 0)                    
    {                        
        var = rev % 10;                        
        var = var + '0';                        
        *str = var;                        
        str++;
        rev = rev / 10;                    
    }
    while (num1)                    
    {                        
        mod1 = num1 % 10;
        if (mod1 == 0)                    
        {                        
            *str = 0 + '0';
            str++;                    
        }            
        else
        {
            break;
        }   
        num1 = num1 / 10;        
    }         
    *str = '\0';  
}