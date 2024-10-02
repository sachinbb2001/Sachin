#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:24/07/2023
Description:Write a script to rena,e a file/directory replaced by lower/upper case letters
Sample Input:
Sample Output:
DOC

echo "Before running the script"
ls                                 #ls to print the files and directories before running the script
echo "After running script"
for i in `ls`                                # it occurs based no of files and directories
do
    if [ -f $i ]
    then
        small=`echo $i|tr [:upper:] [:lower:]` #translate  Capital to Lower and store in variable
        if [ $i != $small ]    #to check source and destination file are not same
        then
            mv $i $small     #rename the file
        fi
        elif [ -d $i ]  #to check it is directory or not
        then
            upper=`echo $i |tr  [:lower:] [:upper:]`  #translate Lower to Capital and store in variable
            if [ $i != $upper ]         #to check whether source and destination directory are not same
            then
                mv $i $upper      #rename the directory
            fi
    fi
done
    ls  #print the files and directories after running script