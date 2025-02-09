package main

import (
	"log"
	"math/rand"
	"time"
)

func bubbleSort(arr []int) {
	start := time.Now()
	n := len(arr)
	swapped := true
	m := 0

	for swapped {
		swapped = false

		for i := 1; i < n; i++ {
			if arr[i-1] > arr[i] {
				// Swap elements if they are in the wrong order
				arr[i-1], arr[i] = arr[i], arr[i-1]
				swapped = true
			}
		}
		n-- // The largest element is now in its correct position, so reduce the length of the unsorted part of the array

		m++
	}

	elapsed := time.Since(start)
	log.Printf("---------- %s", elapsed)
}

func generateUniqueRandomNumbers(n, max int) []int {
	rand.Seed(time.Now().UnixNano())
	set := make(map[int]bool)
	var result []int
	for len(set) < n {
		value := rand.Intn(max)
		if !set[value] {
			set[value] = true
			result = append(result, value)
		}
	}
	return result
}

func main() {
	arr := generateUniqueRandomNumbers(10000, 100000)
	bubbleSort(arr)
}
