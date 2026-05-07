#!/bin/bash

NAME="F-35"
SPEED="500"

read -p "Enter pilot name: " PILOT

echo "Mission Briefing"
echo "Aircraft: $NAME" 
echo "Speed: $SPEED knots"
echo "Pilot: $PILOT"
echo "Prepared by: Ryan"


# Stores your name, a aircraft name, and a speed in variables
# Asks the user to enter a pilot name with read
# Prints a mission briefing using all four variables