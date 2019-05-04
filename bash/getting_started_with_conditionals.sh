#!/bin/bash

read input
case $input in
    Y|y )
        echo YES   ;;
    N|n )
        echo NO    ;;
    *   )
        echo ERROR ;;
esac
