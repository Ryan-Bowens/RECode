#!/bin/bash

print_status() {
    echo "Pilot: $1 | Fuel: $2"
    if [[ $2 -lt 25 ]];
    then echo "Warning: Low fuel!"
    fi
}
refuel(){
    echo "Refueling... now at 100"
}
print_status "Maverick" 20
refuel
print_status "Maverick" 100

echo "------------------"
# reimagined vvvvvvv
print_status() {
    echo "Pilot: $PILOT | Fuel: $FUEL"
    if [[ $FUEL -lt 25 ]];
    then echo "Warning: Low fuel!"
    fi
}
refuel(){
    FUEL=100
    echo "Refueling... now at $FUEL"
}
FUEL=5
PILOT="Maverick"
print_status 
refuel
print_status 


# print_status() — takes a pilot name and fuel level as arguments, prints both 
# with a fuel warning if fuel is below 25
# refuel() — takes a fuel variable and prints "Refueling... now at 100"

# Then in the main part of your script:

# Call print_status with a pilot name and low fuel level
# Call refuel
# Call print_status again with the same pilot but fuel at 100

# Output should look like:
# Pilot: Maverick | Fuel: 20
# Warning: Low fuel!
# Refueling... now at 100
# Pilot: Maverick | Fuel: 100