# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = bubble-nilai
SRC = bubble-nilai.cpp

# Default target: compile the program
all: bubble-nilai

# Compile the bubble-nilai.cpp
bubble-nilai: bubble-nilai.cpp
	g++ -Wall -o bubble-nilai bubble-nilai.cpp

# Run the program in test mode (using test.txt)
test: bubble-nilai
	./bubble-nilai test

# Clean up the compiled files
clean:
	rm -f bubble-nilai
 
# Phony targets to avoid conflicts
.PHONY: all clean test
