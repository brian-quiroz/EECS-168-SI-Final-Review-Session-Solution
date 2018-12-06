Program: main.o User.o SocialMedia.o
	g++ -std=c++11 -g -Wall main.o User.o SocialMedia.o -o Program
main.o: main.cpp User.h SocialMedia.h
	g++ -std=c++11 -g -Wall -c main.cpp
User.o: User.cpp User.h
	g++ -std=c++11 -g -Wall -c User.cpp
SocialMedia.o: SocialMedia.cpp SocialMedia.h
	g++ -std=c++11 -g -Wall -c SocialMedia.cpp
clean:
	rm *.o Program
