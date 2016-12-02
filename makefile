test : sort.h test.cpp
	g++ -std=c++11 -Wall -g -o test test.cpp -lpthread
