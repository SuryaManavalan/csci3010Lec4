CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean:
	rm main