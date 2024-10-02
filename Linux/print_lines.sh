#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:23/07/2023
Description:Write script to print content of file from given line number to next given number of lines
Sample Input: ./print_lines.sh 5 3 myfile.txt
Sample Output:line number 5
              line number 6
              line number 7
DOC

if [ $# -eq 3 ] #condition to check the command line arguments
then
    var1=`cat $3|wc -l` #display the lines in the file and stored in variable
    var2=$(($(($1+$2))-1)) #adjust to get the exact lines for the given arguments
    if [ $var2 -le $var1 ]  #condition to check lines are present in text file which is expected from user
    then
        var3=`cat $3|head -$var2|tail -$2` #above condition true use get the expexted output
        echo "$var3"
    else
        echo "Error: data.txt is having only $var1 lines. file should have atleast 14 lines"
    fi
else
    echo "Error: arguments missing!"
    echo "Usage: ./file_filter.sh start_line upto_line filename"
    echo "For eg. ./file_filter.sh 5 5 <file>"
fi