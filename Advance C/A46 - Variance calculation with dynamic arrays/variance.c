#include <stdio.h>
#include<stdlib.h>
/*
Name: Sachin Belavi
Date: 10/10/2023
Title: Variance calculation with dynamic arrays
Sample Input:Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
Sample Output: Variance is 40.000000
*/

float variance(float *arr, int n)
{
    float sum =0;
    float mean;
    int i;
    for(int i=0; i<n; i++)   // sum of all the elements in array
    {
        sum = sum + arr[i];
    }
        mean = (float)sum / n; //to find avearge of array
        sum=0;
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i] - mean;  //find the deviation
        arr[i] = arr[i] * arr[i];  // square of the deviation
        sum = sum + arr[i];   //sum of all square element
    }
        float variance = sum / n; //expression to find variance of element
    
        return variance;
}
int main()
{
    int num;
    printf("Enter the no.of elements : "); //take element from the user
    scanf("%d",&num);
    
    float *arr = malloc (num*sizeof(int));  //dynamic memory allocation for array
    
    for(int i=0; i<num; i++) //read array element
    {
        scanf("%f",&arr[i]);
    }
    float var = variance (arr , num);
    printf("Variance is %f",var); //print variance of all element
    
}