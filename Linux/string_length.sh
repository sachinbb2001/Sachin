#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:20/09/2023
Description:Write a script to print the length of each and every string using arrays
Sample Input:hello hai how are you?
Sample Output:Length of string (hello) - 5
              Length of string (hai) - 3
DOC

arr=($@)    #array is used to pass argument through CL
if [ $# -gt 0 ]  #condition check
then
    for i in ${arr[@]}     #Run loop for entered string

    do
        echo "Length of string ($i) - ${#i}" #printing the length of string
    done
else
    echo "Error : Please pass the arguments through command-line"    #Printing the error message
fi