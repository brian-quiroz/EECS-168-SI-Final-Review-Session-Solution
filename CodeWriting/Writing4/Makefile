Program: main.o Car.o
	g++ -std=c++11 -g -Wall main.o Car.o -o Program
main.o: main.cpp Car.h
	g++ -std=c++11 -g -Wall -c main.cpp
Car.o: Car.cpp Car.h
	g++ -std=c++11 -g -Wall -c Car.cpp
clean:
	rm *.o Program
