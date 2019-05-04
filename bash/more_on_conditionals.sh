#!/bin/bash

read a
read b
read c

if [ "$a" -ge "1" ] && [ "$a" -ge "1" ] && [ "$c" -ge "1" ] && [ "$a" -le "1000" ] && [ "$b" -le "1000" ] && [ "$c" -le "1000" ] && [ "$((a+b))" -ge "$c" ]  && [ "$((c+b))" -ge "$a" ] && [ "$((a+c))" -ge "$b" ]
then
    if [ "$a" -eq "$b" ] && [ "$a" -eq "$c" ] && [ "$c" -eq "$b" ]
    then
        echo EQUILATERAL
    elif [ "$a" -ne "$b" ] && [ "$a" -ne "$c" ] && [ "$c" -ne "$b" ]
    then
        echo SCALENE
    else
        echo ISOSCELES
    fi
fi
