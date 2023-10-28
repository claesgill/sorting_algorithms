all: build run

build:
	g++ -std=c++17 main.cpp src/algorithms.cpp

run:
	./a.out

