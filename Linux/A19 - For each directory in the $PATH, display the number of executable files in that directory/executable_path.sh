#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:02/08/2023
Description:For each directory in the $PATH, display the number of executable files in that directory
Sample Input:
1. ./executable_path.sh
Current dir: /usr/local/sbin
current count: 0
Current dir: /usr/local/bin
current count: 0
Current dir: /usr/sbin
current count: 205
Current dir: /usr/bin
current count: 1889
Current dir: /sbin
current count: 187
Current dir: /bin
current count: 159
Current dir: /usr/games
current count: 5
Current dir: /usr/local/games
current count: 0
Total – 2445
Sample Output:
DOC

array=(`echo $PATH | tr ":" " " `)        #Get all the directory in array
    total=0                                   #initialize total=0
    for i in ${array[@]}                        #using loop to get directory
    do
        if [ -d $i ]                          #check for directory
        then
            count=0                           #initialize count=0
        echo "Current dir:$i"            #Print current directory name
            cd $i                            #Change tha directory
            list=(`ls`)                      #to get all file of the directory
            for i in ${list[@]}
            do
                if [ -f $i -a -x $i ]       #check for file exist and is it executable
                then
                    count=$(($count+1))     #Count the executable file
                fi
            done
            echo "Current Count:$count"      #print the count of current directory
            total=$(($total+$count))         #Get the total count
        fi
    done
    echo "Total:$total"                    #print the total count