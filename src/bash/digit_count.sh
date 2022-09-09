#!/bin/bash

COUNT=1
N=$1

while [[ $N -gt 10 ]]; do
    COUNT=$(($COUNT+1))
    N=$(($N/10))
done

printf "$COUNT"