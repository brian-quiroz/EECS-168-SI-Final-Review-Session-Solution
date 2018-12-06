Program: main.o Circle.o
	g++ -std=c++11 -g -Wall main.o Circle.o -o Program
main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
Circle.o: Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp
clean:
	rm *.o Program
