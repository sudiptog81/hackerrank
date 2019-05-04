#!/bin/bash

read x
read y

if [ "$x" -ge "-100" ] && [ "$y" -ge "-100" ] && [ "$x" -le "100" ] && [ "$y" -le "100" ] && [ "$y" -ne "0" ]
then
    for op in {"+","-","*","/"}
        do {
            echo "$x $op $y" | bc
        }
        done
    else
        echo "ERROR"
fi
