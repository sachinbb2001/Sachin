#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:22/07/2023
Description:write a script to delete empty lines from a file
Sample Input:file.txt
Sample Output:Empty lines are deleted
DOC


if [ $# -eq 1 ]   #check the condition of arguments
then
    echo "Empty lines are deleted"
    sed '/^[[:space:]]*$/d' $1 #condition true then print the output
    
else
    echo "Error: Please pass the file name through command line." #if condition false print error message
fi