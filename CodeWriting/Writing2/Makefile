Program: main.o StringClass.o
	g++ -std=c++11 -g -Wall main.o StringClass.o -o Program
main.o: main.cpp StringClass.h
	g++ -std=c++11 -g -Wall -c main.cpp
StringClass.o: StringClass.h StringClass.cpp
	g++ -std=c++11 -g -Wall -c StringClass.cpp
clean:
	rm *.o Program
