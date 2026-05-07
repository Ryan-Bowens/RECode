#!/bin/bash

echo "Mission started" > mission.log
echo "Aircraft: F-35" >> mission.log
echo "Altitude: 35000" >> mission.log
echo "WARNING: Low fuel detected" >> mission.log
echo "Returning to base" >> mission.log

while IFS= read -r LINE; do 
    echo "Log entry: $LINE" 
done < mission.log
TOTAL=$(cat mission.log | wc -l)
echo "Total lines: $TOTAL"
echo "Warnings found:"
cat mission.log | grep "WARNING"


# Creates a mission log file called mission.log with at least 5 entries including 
# one line that contains the word "WARNING"
# Reads the log file and prints each line with "Log entry: " prefix
# Uses a pipe to count and print how many lines are in the log
# Uses a pipe to find and print any lines containing "WARNING"

# Output should look like:
# Log entry: Mission started
# Log entry: Aircraft: F-35
# Log entry: Altitude: 35000
# Log entry: WARNING: Low fuel detected
# Log entry: Returning to base
# Total lines: 5
# Warnings found:
# WARNING: Low fuel detected