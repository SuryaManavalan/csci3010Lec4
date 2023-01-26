CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler

all: main

main: main.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) main.o functions_to_implement.o -o main

main.o: main.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c main.cpp

functions_to_implement.o: functions_to_implement.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

clean:
	rm main main.o functions_to_implement.o