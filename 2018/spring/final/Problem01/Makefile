all: Problem01
	g++ -L. Problem01.o ProblemMain.o -o Problem01

Problem01: problem01.cpp
	g++ -std=c++11 -c problem01.cpp -o Problem01.o
	g++ -std=c++11 -c problem01_main.cpp -o ProblemMain.o

clean:
	rm *.o -f
	rm Problem02 -f