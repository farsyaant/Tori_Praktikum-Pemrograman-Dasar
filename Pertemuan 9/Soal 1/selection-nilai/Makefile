# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = selection-nilai
SRC = selection-nilai.cpp

# Default target: compile the program
all: selection-nilai

# Compile the selection-nilai.cpp
selection-nilai: selection-nilai.cpp
	g++ -Wall -o selection-nilai selection-nilai.cpp

# Run the program in test mode (using test.txt)
test: selection-nilai
	./selection-nilai test

# Clean up the compiled files
clean:
	rm -f selection-nilai

# Phony targets to avoid conflicts
.PHONY: all clean test
