#include<stdio.h>
/*
Name: Sachin Belavi
Date: 23/08/2023
Title:WAP to generate AP, Gp<Hp series
Sample Input:Enter the First Number 'A': 2
             Enter the Common Difference / Ratio 'R': 3
             Enter the number of terms 'N': 5
Sample Output:AP = 2, 5, 8, 11, 14
              GP = 2, 6, 18, 54, 162
              HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

int main()
{
    int A,R,N,i;  //read value from the user
    printf("Enter the First Number 'A': ");
    scanf("%d",&A);
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&R);
    printf("Enter the number of terms 'N': ");
    scanf("%d",&N);
    if(N>=0)  //check condition for positive number
    {
        int AP=A;  //arithmetic progression
        printf("Ap = ");
        for(i=1;i<=N;i++)
        {
            printf(" %d", AP);
            AP=AP+R;   //condition for arithmetic progression
        }
        printf("\n");
        int GP=A;    //geometric progresssion
        printf("Gp = ");
        for(int j=1;j<=N;j++)
        {
            printf(" %d", GP);
            GP=GP*R;   //condition for geometric progresssion
        }
        printf("\n");
        float HP=1/(float)A;  //geometric progresssion
        printf("HP = ");
        for(int k=1;k<=N;k++)
        {
            printf(" %f", HP);
            A=A+R;
            HP=1/(float)A;     // condition for geometric progresssion
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}