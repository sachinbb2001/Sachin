#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:03/08/2023
Description:Write a script to determine whether a given file system or mount point is mounted
Sample Input: ./mounted_fs.sh /dev/sda2
Sample Output:File-system /dev/sda2 is mounted on / and it is having 98%
used space with 3298220 KB free
DOC

if [ $# -ne 0 ]
then
    FileSys=(`df | cut -d " " -f1`)                      #File System
    Available=(`df | tr -s " " | cut -d " " -f4`)        #Available space
        Use=(`df | tr -s " " | cut -d " " -f5`)              #To get Usage
            mounted=(`df | tr -s " " | cut -d " " -f6`)         #To know where file system mounted
                count=1                                        #initialize count to know file mounted or not
                for i in `seq 1 $((${#FileSys[@]}-1))`
                do
                    if [ $1  = ${FileSys[$i]} ]                      #Check argument passed present in file system
                    then                                            #Print Details of file system
                        echo "File-system $1 is mounted on ${mounted[$i]} it is having ${Use[$i]} used space with  ${Available[$i]} free"
                        count=0
                    fi
                done
                if [ $count -eq 1 ]                              #if count is equal to 1 print file is not mounted on system
                then
                    echo "$1 is not Mounted"
                fi
            else                                                #print error message if no argument passed
                echo "Error : Please pass the name of the file-system through command line."
fi