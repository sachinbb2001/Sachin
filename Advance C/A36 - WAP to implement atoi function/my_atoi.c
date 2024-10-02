#include <stdio.h>
#include <stdlib.h>
/*
Name: Sachin Belavi
Date: 28/09/2023
Title:WAP to implement atoi function
Sample Input:Enter a numeric string: 12345
Sample Output: String to integer is 12345
*/


int my_atoi(const char []);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}
int my_atoi(const char str[])
{
    int num = 0, i = 0, flag = 1;
    
    while(str[i] == ' ')   //it is skip the space
    {
        i++;
    }
    
    if(str[i] == '+' || str[i] == '-')  //to check str is +ve or -ve
    {
        if(str[i] == '-')
        {
            flag = -1;
        }
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9')) //to check non zero numeric
    {
    num = num * 10 + (str[i] - 48);
    i++;
    }
    return flag*num;
}
