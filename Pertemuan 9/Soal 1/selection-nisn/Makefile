# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = selection-nisn
SRC = selection-nisn.cpp

# Default target: compile the program
all: selection-nisn

# Compile the selection-nisn.cpp
selection-nisn: selection-nisn.cpp
	g++ -Wall -o selection-nisn selection-nisn.cpp

# Run the program in test mode (using test.txt)
test: selection-nisn
	./selection-nisn test

# Clean up the compiled files
clean:
	rm -f selection-nisn

# Phony targets to avoid conflicts
.PHONY: all clean test
