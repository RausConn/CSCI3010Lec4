# Makefile for main.cpp, catch.hpp, functions_to_implement.cpp, and functions_to_implement.hpp

CXX = g++  

CXXFLAGS = -std=c++2a -Wall

all: test

test: main.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) -o test main.o functions_to_implement.o

main.o: main.cpp catch.hpp functions_to_implement.hpp

functions_to_implement.o: functions_to_implement.cpp functions_to_implement.hpp

clean:
	rm *.o test