b: lab3_b.o Clock.o
	g++ -o lab3_b lab3_b.o Clock.o
Clock.o: Clock.h Clock.cpp
	g++ -c Clock.cpp
lab3_b.o: lab3_b.cpp Clock.h
	g++ -c lab3_b.cpp

a: lab3_a.o
	g++ -o lab3_a lab3_a.o
lab3_a.o: lab3_a.cpp
	g++ -c lab3_a.cpp

clean:
	rm lab3_* *.o
