// C++ program for optimized implementation of Bubble sort
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <random>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(vector<int>& v) {
    auto start = std::chrono::high_resolution_clock::now();
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {

        // Creating a flag to denote the case wwhen array
        // is sorted and doesnt cause any swap
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
              
                  // Setting flag true when swap happened
                flag = true;
            }
        }
      
          // Checking if the flag is set or not
        if (!flag)
            break;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "Execution Time: " << elapsed.count() << " ms\n";
}

int main() {

    const int SIZE = 10000;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 1000000;

    std::vector<int> numbers;
    numbers.reserve(SIZE);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(MIN_VALUE, MAX_VALUE);

    for (int i = 0; i < SIZE; ++i) {
        numbers.push_back(dist(gen));
    }

    bubbleSort(numbers);

    return 0;
}
