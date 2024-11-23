# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = insertion-nilai
SRC = insertion-nilai.cpp

# Default target: compile the program
all: insertion-nilai

# Compile the insertion-nilai.cpp
insertion-nilai: insertion-nilai.cpp
	g++ -Wall -o insertion-nilai insertion-nilai.cpp

# Run the program in test mode (using test.txt)
test: insertion-nilai
	./insertion-nilai test

# Clean up the compiled files
clean:
	rm -f insertion-nilai

# Phony targets to avoid conflicts
.PHONY: all clean test
