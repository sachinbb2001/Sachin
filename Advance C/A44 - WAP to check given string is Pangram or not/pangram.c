#include <stdio.h>

int pangram(char str[])
{
    int array[26]={0};
    int temp=0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            temp = temp + (!array[str[i] - 'a']);
            array[str[i] - 'a'] = 1;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            temp = temp + (!array[str[i]- 'A']);
            array[str[i] - 'A'] = 1;
        }
    }
    if (temp == 26)
    {
        printf("The Entered String is a Pangram String");
    }
    else
    printf("The Entered String is not a Pangram String");
}

int main()
{
    char str[100];
    
    printf("Enter the String : ");
    scanf("%[^\n]", str);
    
   pangram(str);
}