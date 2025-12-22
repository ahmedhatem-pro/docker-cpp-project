FROM ubuntu:22.04

# Set working directory
WORKDIR /app

# Install compiler
RUN apt-get update 
RUN apt-get install -y g++ 

# Copy source code
COPY main.cpp .

# Compile the C++ program
RUN g++ main.cpp -o app

# Run the app
CMD ["./app"]