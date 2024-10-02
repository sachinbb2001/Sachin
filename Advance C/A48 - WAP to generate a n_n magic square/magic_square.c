#include <stdio.h>
#include <stdlib.h>
/*
Name: Sachin Belavi
Date: 29/10/2023
Title:WAP to generate a n*n magic square
Sample Input:Enter a number: 3
             
Sample Output:8      1      6
              3      5      7
              4      9      2
*/

void magic_square(int **arr, int num)
{
    int row = 0;
    int col = (num - 1) / 2;
    int count = 1;
    while(count <= num * num)
    {
        if(arr[row][col] == 0)  //condtion to check index is empty or not
        {
            arr[row][col] = count; 
        }
        else      //index not empty then 
        {
            row = row + 2;   
            if(row > num)    //
            {
                row = 1;
            }
            col--;
            if(col < 0)
            {
                col = num-1;
            }
            arr[row][col] = count;
        }
        row--;
        if(row < 0)
        {
            row = num - 1;
        }
        col++;
        if(col == num)   //if col equal to 0 then col equal to 0
        {
            col = 0;
        }
        count++;   //incrementing the count
    }
}
int main()
{
    int **arr;   
    int num;
    
     // printf("Enter a number: ");   //take no from user
    scanf("%d",&num);
    arr = calloc(num, sizeof(int *));  //memory allocation for row
    for(int i=0; i<num; i++)
    {
        arr[i] = calloc(num, sizeof(int));  //memory alocation for columns
    }
  
    if(num % 2 != 0)
    {
        magic_square(arr, num);       //function call
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    else
    {
        printf("Error : Please enter only positive odd numbers");
       
    }
}