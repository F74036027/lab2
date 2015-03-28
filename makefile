lab2: lab2.o BMIs.o
	g++ -o lab2 lab2.o BMIs.o

lab2.o: lab2.cpp BMIs.h
	g++ -c lab2.cpp

BMIs.o: BMIs.cpp BMIs.h
	g++ -c BMIs.cpp
