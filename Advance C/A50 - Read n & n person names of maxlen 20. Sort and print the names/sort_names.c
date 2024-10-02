#include <stdio.h>
#include <stdlib.h>
/*
Name: Sachin Belavi
Date: 29/10/2023
Title:Read n & n person names of maxlen 20. Sort and print the names
Sample Input:
Enter the size: 5
Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai
Sample Output:
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/

void sort_names(char (*)[20], int);
int main()
{
    char (*arr)[20];  //pointer to array
    int row;
    //printf("Enter the size: ");   //take size from the user
    scanf("%d", &row);

    arr = malloc(row * sizeof(char[20]));   //dynamic memory allocation
    for(int i = 0; i < row; i++)
    {
        scanf(" %20s", arr[i]);
    }
  
    sort_names(arr, row);
    
    printf("The sorted names are :\n");  //printing sorted names
    for (int i = 0; i < row; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}

void sort_names(char (*arr)[20], int row)
{
    int k;
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            k=0;
            while(arr[j][k] == arr[j+1][k])  //condition to check if the first character of user entered names is same then increamenting the k
            {
                k++;
            }
            if (arr[j][k] > arr[j + 1][k])
            {
                for(int m = 0; m < 20; m++)   //swaping occurs upto null character
                {
                    char temp = arr[j][m];
                    arr[j][m] = arr[j + 1][m];
                    arr[j + 1][m] = temp;
                }
            }
        }
    }
}
