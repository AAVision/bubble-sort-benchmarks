# Use the official Python image based on Alpine
FROM python:3.12-alpine

# Install build dependencies, including distutils, Cython, and compilers
RUN apk add --no-cache gcc musl-dev python3-dev make build-base libffi-dev py3-setuptools

# Install distutils explicitly, which includes the necessary build tools
RUN apk add --no-cache python3-dev distutils

# Set the working directory inside the container
WORKDIR /app

# Copy the necessary files into the container
COPY . /app

# Install Cython
RUN pip install --no-cache-dir Cython

# Build the Cython extension
RUN python setup.py build_ext --inplace

# Run the Python test file after building
CMD ["python", "test_cython.py"]
