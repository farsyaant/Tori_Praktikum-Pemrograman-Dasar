#Variable
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_4
SRC = Soal_4.cpp

#Compiletheprogram
all: Soal_4

#CompiletheSoal_4.cpp
Soal_4: Soal_4.cpp
        g++ -Wall -o Soal_4 Soal_4.cpp

#Runtest
test: Soal_4
      ./Soal_4 test

#Clean 
clean: rm -f Soal_4 

#Phonytoavoidconflicts
.PHONY: all clean test
