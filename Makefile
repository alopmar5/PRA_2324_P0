all:main
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp
main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp
Main: main.o BrazoRobotico.o
	g++ -o main main.o BrazoRobotico.o
clean:
	rm -f*.omain
test:all
	./main
