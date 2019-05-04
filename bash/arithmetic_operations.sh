#!/bin/bash

read expression
printf "%.3f" $(echo -e $expression | bc -l)
