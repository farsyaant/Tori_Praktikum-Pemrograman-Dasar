# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_4
SRC = Soal_4.cpp

# Default target: compile the program
all: Soal_4

# Compile the Soal_1.cpp
Soal_4: Soal_4.cpp
	g++ -Wall -o Soal_4 Soal_4.cpp

# Run the program in test mode 
test: Soal_4
	./Soal_4 test

# Clean up the compiled files
clean:
	rm -f Soal_4
 
# Phony targets to avoid conflicts
.PHONY: all clean test
