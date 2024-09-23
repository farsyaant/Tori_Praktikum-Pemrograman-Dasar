# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_1
SRC = Soal_1.txt

# Default target: compile the program
all: $(Soal_1)

# Compile the Soal_1.txt
$(Soal_1): $(Soal_1.txt)
	$(g++) $(-Wall) -o $(Soal_1) $(Soal_1.txt)

# Run the program in test mode (using test.txt)
test: $(Soal_1)
	./$(Soal_1) test

# Clean up the compiled files
clean:
	rm -f $(Soal_1)

# Phony targets to avoid conflicts
.PHONY: all clean test
