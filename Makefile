output: main.o fibonacci.o
	g++ main.o fibonacci.o -o output
	
main.o: main.cpp
	g++ -c main.cpp 
	
fibonacci.o: fibonacci.cpp
	g++ -c fibonacci.cpp
	
clean:
	rm *.o output
