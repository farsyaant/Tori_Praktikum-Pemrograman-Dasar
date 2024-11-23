# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_3
SRC = Soal_3.cpp

# Default target: compile the program
all: Soal_3

# Compile the Soal_3.cpp
Soal_3: Soal_3.cpp
	g++ -Wall -o Soal_3 Soal_3.cpp

# Run the program in test mode (using test.txt)
test: Soal_3
	./Soal_3 test

# Clean up the compiled files
clean:
	rm -f Soal_3

# Phony targets to avoid conflicts
.PHONY: all clean test

