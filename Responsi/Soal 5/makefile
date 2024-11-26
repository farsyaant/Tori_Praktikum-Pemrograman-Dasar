#Variable
CXX = g++
CXXFLAGS = -Wall
TARGET = Soal_5
SRC = Soal_5.cpp

#Compiletheprogram
all: Soal_5

#CompiletheSoal_5.cpp
Soal_5: Soal_5.cpp
        g++ -Wall -o Soal_5 Soal_5.cpp

#Runtest
test: Soal_5
      ./Soal_5 test

#Clean 
clean: rm -f Soal_5 

#Phonytoavoidconflicts
.PHONY: all clean test
