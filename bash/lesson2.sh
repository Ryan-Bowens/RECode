#!/bin/bash

read -p "Enter Aircraft: " AIRCRAFT
read -p "Enter Altitude: " ALTITUDE

if [[ $AIRCRAFT == "F-35" && $ALTITUDE -ge 30000 ]]; 
then echo "F-35 crusing at optimal"
elif [[ $AIRCRAFT == "F-35" && $ALTITUDE -lt 30000 ]]; 
then echo "F-35 still climbing"
elif [[ $ALTITUDE -ge 20000 ]]; 
then echo "Aircraft cruising"
else echo "Aircraft on the ground"
fi


# Asks the user for an aircraft type
# Asks the user for an altitude
# Prints a status based on both:

# If aircraft is "F-35" and altitude is above 30000 → "F-35 cruising at optimal altitude"
# If aircraft is "F-35" but altitude is below 30000 → "F-35 still climbing"
# Any other aircraft above 20000 → "Aircraft cruising"
# Anything else → "Aircraft on the ground"