# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = insertion-nisn
SRC = insertion-nisn.cpp

# Default target: compile the program
all: insertion-nisn

# Compile the insertion-nisn.cpp
insertion-nisn: insertion-nisn.cpp
	g++ -Wall -o insertion-nisn insertion-nisn.cpp

# Run the program in test mode (using test.txt)
test: insertion-nisn
	./insertion-nisn test

# Clean up the compiled files
clean:
	rm -f insertion-nisn

# Phony targets to avoid conflicts
.PHONY: all clean test
