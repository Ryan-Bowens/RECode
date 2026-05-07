#!/bin/bash

AIRCRAFTS=("F-35" "F-22" "B-2" "SR-71" "F-16")
COUNT=1

for AIRCRAFT in "${AIRCRAFTS[@]}"; do 
    echo "$COUNT. $AIRCRAFT"
    COUNT=$((COUNT + 1))
done

echo "Counting down..."

i=10 
while [[ $i -gt 0 ]]; do 
    echo "$i" 
    i=$((i - 1))
done 
echo "Launching"




# Creates a list of 5 aircraft
# Loops through and prints each one with a number (1. F-35, 2. F-22 etc.)
# Then uses a while loop to count down from 10 to 1 and prints "Launching!" at the end

# 1. F-35
# 2. F-22
# 3. B-2
# 4. SR-71
# 5. F-16
# Counting down...
# 10
# 9
# 8...
# 1
# Launching!