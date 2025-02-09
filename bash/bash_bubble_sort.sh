#!/bin/bash

# Generate an array of 10,000 random numbers between 1 and 100,000
array=()
for ((i=0; i<10000; i++)); do
    array[i]=$((RANDOM % 100000 + 1))
done

# Function to perform Bubble Sort
bubble_sort() {
    local -n arr=$1
    local n=${#arr[@]}
    local temp
    local swapped=1

    # Record start time
    start_time=$(date +%s%N)

    while ((swapped)); do
        swapped=0
        for ((i = 0; i < n - 1; i++)); do
            if ((arr[i] > arr[i+1])); then
                # Swap elements
                temp=${arr[i]}
                arr[i]=${arr[i+1]}
                arr[i+1]=$temp
                swapped=1
            fi
        done
    done

    # Record end time
    end_time=$(date +%s%N)

    # Calculate execution time in milliseconds
    execution_time=$(( (end_time - start_time) / 1000000 ))
    echo "Execution Time: ${execution_time} ms"
}

# Call the Bubble Sort function
bubble_sort array

