#!/bin/bash

N=$1  # Replace with the desired number of runs
OUTPUT_FILE="${N}.txt"

# Clear the output file
> "${OUTPUT_FILE}"

make

# Run the program N times and append the output to the file
for ((i=1; i<=N; i++)); do
     echo "${N}" | ./build/object/executavel >> "${OUTPUT_FILE}"
done

# Read numbers from the file
numbers=()
while IFS= read -r line; do
    # Check if the line is a valid number
    if [[ $line =~ ^[0-9]+(\.[0-9]+)?$ ]]; then
        numbers+=("$line")
    fi
done < "${N}.txt"

# Calculate the average
sum=0
count=${#numbers[@]}
for number in "${numbers[@]}"; do
    sum=$(echo "$sum + $number" | bc -l)
done

average=$(echo "$sum / $count" | bc -l)

echo "Average: $average"