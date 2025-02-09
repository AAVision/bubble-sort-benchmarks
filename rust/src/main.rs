use rand::Rng;
use std::time::Instant;

fn main() {
    // Generate 10.000 random numbers
    let mut rng = rand::thread_rng();
    let mut numbers: Vec<u32> = Vec::new();
    for _ in 0..10000 {
        numbers.push(rng.gen());
    }

    let start = Instant::now();
    // Bubble sort
    bubble_sort(&mut numbers);

    let duration = start.elapsed();
    println!("Execution time: {:?}", duration);
}

fn bubble_sort(numbers: &mut Vec<u32>) {
    let len = numbers.len();
    for i in 0..len {
        for j in 0..len-i-1 {
            if numbers[j] > numbers[j+1] {
                numbers.swap(j, j+1);
            }
        }
    }
}


