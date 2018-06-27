

output: Menu.o LangtonsAnt.o Ant.o
	g++ -o output Menu.o LangtonsAnt.o Ant.o

Menu.o: Menu.cpp 
	g++ -c Menu.cpp

LangtonsAnt.o: LangtonsAnt.cpp LangtonsAnt.h
	g++ -c LangtonsAnt.cpp

Ant.o: Ant.cpp Ant.h
	g++ -c Ant.cpp

clean:
	rm *.o output