#!/bin/bash

echo "Flights" > flight.log
echo "Mission Start" >> flight.log
echo "Flight Status Check" >> flight.log
echo "ERROR: Low fuel detected" >> flight.log
echo "ERROR: Altitude low" >> flight.log
echo "Abandon flight simulation" >> flight.log

TOTAL=$(cat flight.log | grep "ERROR" | wc -l)
echo "Total errors: $TOTAL"

echo "Errors:"
cat flight.log | grep "ERROR"
