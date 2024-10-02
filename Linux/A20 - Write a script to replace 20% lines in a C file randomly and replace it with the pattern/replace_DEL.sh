#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:31/07/2023
Description:write a script to replace 20% lines in a c file randomly and replace it with the pattern
Sample Input:
Sample Output:
DOC

arr=(@)            #store command line argument in array
if [ $# -eq 1 ]    #check the condition
then
       if [ -f $@ ]                  #given argument is file or not
       then
           if [ -s $@ ]              #entered file containt or not
           then
               totalline=`cat $1|wc -l`             #get lines using wc command
               per20=$(($totalline/5))
               arr=(`shuf -i 1-$totalline -n$per20`) #20% of line changing using shuf command
               for i in ${arr[@]}
               do
                   sed $i "s/.*/<--Deleted-->/" $1     #display random number of line
               done
           else
              echo "Error : $1 is empty file.So can't replace the string."
              fi
          else
         echo Error : No such a file.
       fi
   else
       echo "Error : Please pass the file name through command line."
fi