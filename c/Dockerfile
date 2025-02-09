# Use Alpine Linux with GCC for a minimal setup
FROM alpine:latest

# Install GCC and MUSL for compiling C programs
RUN apk add --no-cache gcc musl-dev

# Set the working directory inside the container
WORKDIR /app

# Copy the C source code into the container
COPY c_bubble_sort.c .

# Compile the C program
RUN gcc -o c_bubble_sort c_bubble_sort.c

# Define the command to run the compiled program
CMD ["./c_bubble_sort"]