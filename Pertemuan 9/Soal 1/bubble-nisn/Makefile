# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = bubble-nisn
SRC = bubble-nisn.cpp

# Default target: compile the program
all: bubble-nisn

# Compile the bubble-nisn.cpp
bubble-nisn: bubble-nisn.cpp
	g++ -Wall -o bubble-nisn bubble-nisn.cpp

# Run the program in test mode (using test.txt)
test: bubble-nisn
	./bubble-nisn test

# Clean up the compiled files
clean:
	rm -f bubble-nisn

# Phony targets to avoid conflicts
.PHONY: all clean test
