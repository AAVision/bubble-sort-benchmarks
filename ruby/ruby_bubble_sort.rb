require 'securerandom'

def bubble_sort(array)

    start_time = Time.now  # Start measuring time
    array_length = array.size

    loop do
        swapped = false

        (array_length - 1).times do |i|
            if array[i] > array[i + 1]
                array[i], array[i + 1] = array[i + 1], array[i]
                swapped = true
            end
        end

        break unless swapped
    end

    end_time = Time.now  # End measuring time
    puts "Execution time: #{end_time - start_time} seconds"

end

# Generate an array of 10,000 random positive numbers
unsorted_array = Array.new(10_000) { rand(1..100_000) }

p bubble_sort(unsorted_array)
