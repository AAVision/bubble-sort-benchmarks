# Start with a minimal Golang Alpine image
FROM golang:1.23.5-alpine AS builder

# Set the working directory
WORKDIR /app

# Copy the Go module files and download dependencies
COPY go.mod ./
RUN go mod download

# Copy the rest of the application code
COPY . .

# Build the Go application as a static binary
RUN go build -o app .

# Create a minimal runtime image
FROM alpine:latest

# Set the working directory
WORKDIR /app

# Copy the built binary from the builder stage
COPY --from=builder /app/app .

# Expose the application's port (optional, if it's a web service)
EXPOSE 8080

# Run the application
CMD ["./app"]
