# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_5
SRC = Soal_5.cpp

# Default target: compile the program
all: Soal_5

# Compile the Soal_5.cpp
Soal_5: Soal_5.cpp
	g++ -Wall -o Soal_5 Soal_5.cpp

# Run the program in test mode 
test: Soal_5
	./Soal_5 test

# Clean up the compiled files
clean:
	rm -f Soal_5
 
# Phony targets to avoid conflicts
.PHONY: all clean test
