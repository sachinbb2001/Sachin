#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:02/08/2023
Description: WAS to print contents of directory without using ls command
Sample Input:
Sample Output:
DOC

if [ $# -eq 0 ]                         #Check the command line argument
then
    echo *                              #Print the content of current working directory
    else

dir=($@)    #Directory Name to be store in array
for i in ${dir[@]}   #to get directory through loop
do
    if [ -d $i ]
then
    echo $i                        #Print Directory name
    cd $i                           #change Directory to required Directory
    echo *                          #get the content
else
    echo "output_ls.sh: Cannot access ‘Test’ : No such a file or directory."                        #To print the error message if no file or directory present
    fi
done
fi