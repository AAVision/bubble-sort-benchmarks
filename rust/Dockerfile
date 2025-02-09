# ======= Build Stage =======
FROM rust:alpine as builder

# Install required dependencies
RUN apk add --no-cache musl-dev

# Set the working directory inside the container
WORKDIR /app

# Copy the source code into the container
COPY . .

# Compile the Rust program in release mode
RUN rustc -C opt-level=3 -o program src/main.rs

# ======= Runtime Stage =======
FROM alpine:latest

# Copy the compiled binary from the builder stage
COPY --from=builder /app/program /usr/local/bin/program

# Set execution permissions
RUN chmod +x /usr/local/bin/program

# Define the command to run the Rust program
CMD ["program"]
