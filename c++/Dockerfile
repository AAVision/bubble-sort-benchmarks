# Use Alpine Linux with GCC for a minimal setup
FROM alpine:latest

RUN apk add --no-cache g++ musl-dev

# Set the working directory inside the container
WORKDIR /app

# Copy the C++ source code into the container
COPY cpp_bubble_sort.cpp .

# Compile the C++ program
RUN g++ -o cpp_bubble_sort cpp_bubble_sort.cpp

# Define the command to run the compiled program
CMD ["./cpp_bubble_sort"]