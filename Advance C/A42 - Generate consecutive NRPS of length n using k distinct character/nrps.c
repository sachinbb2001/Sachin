#include <stdio.h>
/*
Name: sachin Belavi
Date: 13/10/2023
Title:Generate consecutive NRPS of length n using k distinct character
Sample Input:Enter the string : 
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
Sample Output:Possible NRPS is abcbca
*/

void nrps(char str[], int len, int c);

int main()
{
    int n,c,i,j;
    char distinct[100];
    
    //read the input from the user
    printf("Enter the number characters C : ");
    scanf("%d", &c);
    //read length from user
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);
    //emter 3 distict char from user 
    printf("Enter 3 distinct characters : ");
    for(i = 0; i < c; i++)
    {
        scanf("\n%c", &distinct[i]);
    }
    
    //function call to pass input to the function
    for(i = 0 ; i < c; i++)
    {
        for(j = (i + 1); j < c; j++)
        {
            if(distinct[j] == distinct[i])
            {
                printf("Error : Enter  distinct characters\n");
                return 1;
            }
        }
    }
    printf("possible NRPS is\n");
    nrps(distinct, n,c);
    return 0;
}
void nrps(char str[] ,int len,int c)
{
    int i,val =0,count =0;  //declare variables
    for(i = 0; i < len ; i++)   //print the n charcters
    {
        if(i % c == 0 && i != 0)
        {
            val++;
        }
        printf("%c", *(str + ((i + val) % c)));  //print it in reverse order
    }
}