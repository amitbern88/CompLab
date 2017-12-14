all: pokemon

pokemon: 		main.o BattleGround.o
	g++ -Wall -o pokemon main.o

main.o: 		main.cpp
	g++ -Wall -o main.o main.cpp 
	
BattleGround.o: BattleGround.cpp
	g++ -Wall -o BattleGround.o BattleGround.cpp BattleGround.h

Blastoise.o:	Blastoise.cpp
	g++ -Wall -o Blastoise.o Blastoise.cpp Blastoise.h
	
clean: 
	rm -f *.o pokemon