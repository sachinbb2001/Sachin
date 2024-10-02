#include <stdio.h>
#include<stdlib.h>
/*
Name: Sachin Belavi
Date: 29/10/2023
Title:WAP to implement fragments using Array of Pointers
Sample Input:
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
Sample Output:
After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
*/


int fragments(int, float *[], int []);

int main()
{
    int row;
    printf("Enter no.of rows : \n");  //enter the rows from user
    scanf("%d",&row);
    
    int col[row],i,j;
    float *arr[row];
    for(i=0; i<row; i++)        //reading number of columns in row using loop
    {
        printf("Enter no.of columns in row[%d] : ",i);
        scanf("%d",&col[i]);
        
        arr[i]=malloc((col[i]+1)*sizeof(float));  //memory allocation using malloc function
    }
    
    for(i=0; i<row; i++)    //reading column values from user
    {
        printf("Enter %d values for row[%d] : ",col[i],i);
        for(j=0;j<col[i];j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    
    for(i=0; i<row; i++)
    {
        float sum=0;
        for(j=0;j<col[i];j++)
        {
            sum = sum + arr[i][j];
        }
        arr[i][j] = sum / col[i];
    }

    printf("Before sorting output is:\n");              //prints Before sorting output
    for(i=0; i<row; i++)
    {
        for(j=0;j<(col[i]+1);j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

    fragments(row, arr, col);
    
    printf("After sorting output is:\n");     //prints After sorting output
    for(i=0; i<row; i++)
    {
        for(j=0;j<(col[i]+1);j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }
}

int fragments(int row, float *arr[], int col[])
{
    for(int i=0; i<row-1; i++)         //sort the array based on the average
    {
        for(int j=0;j<row-1-i;j++)
        {
            if(arr[j][col[j]] > arr[j+1][col[j+1]])
            {
                float *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                int temp1 = col[j];
                col[j] = col[j+1];
                col[j+1] = temp1;
            }
        }
    }

}