# Makefile for main.cpp, catch.hpp, functions_to_implement.cpp, and functions_to_implement.hpp

CXX = g++  

CXXFLAGS = -std=c++2a -Wall

all: main

main: main.cpp functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.cpp -o main

clean:
	rm main