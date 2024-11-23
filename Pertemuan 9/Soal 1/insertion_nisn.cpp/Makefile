# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = insertion_nisn
SRC = insertion_nisn.cpp

# Default target: compile the program
all: insertion_nisn

# Compile the insertion_nisn.cpp
insertion_nisn: insertion_nisn.cpp
	g++ -Wall -o insertion_nisn insertion_nisn.cpp

# Run the program in test mode (using test.txt)
test: insertion_nisn
	./insertion_nisn test

# Clean up the compiled files
clean:
	rm -f insertion_nisn

# Phony targets to avoid conflicts
.PHONY: all clean test
