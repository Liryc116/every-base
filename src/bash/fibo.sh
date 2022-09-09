#!/bin/bash

if [[ $1 -le 0 ]]; then
    printf "0\n"
    exit 0;
fi

F0=0
F1=1

for i in seq($1); do
    TMP=F1
    F1=$(($F1+$F0))
    F0=TMP
done

printf "$F1\n"