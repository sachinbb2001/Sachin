#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:03/08/2023
Description:Given album name and corresponding directory, this scripts renames the jpg files with new name passed through command line
Sample Input:
Sample Output:
DOC


arr=(`ls *.jpg`)    #fetch .jpg extension files from current directory and store in array
    if [ $# -eq 1 ]       #condition for only one command line argument
    then
        for i in ${arr[@]} #run a loop for given array
        do
            old_name=$i
            digit=`echo $old_name|tr -cd [:digit:]`   #store only numbers from given old name
            new_name=`echo "$1$digit.jpg"`                 #print passed arg name with above stored number also .jpg extension
            if [ $old_name != $new_name ]                  #condition for oldname and newname are not equal or equal
            then
                mv $old_name $new_name                 #rename
            fi
        done
        ls
    else
        echo "Error : Please pass the prefix name through command line."
    fi