HW10 : Pokemon.o Charizard.o main.o Gengar.o Dragonite.o
	g++ -o HW10 Pokemon.o Charizard.o main.o Gengar.o Dragonite.o
Pokemon.o : Pokemon.cpp Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c Pokemon.cpp
Charizard.o : Charizard.cpp Charizard.h
	g++ -ansi -pedantic-errors -Wall -c Charizard.cpp
main.o : main.cpp
	g++ -ansi -pedantic-errors -Wall -c main.cpp
Gengar.o : Gengar.cpp Gengar.h
	g++ -ansi -pedantic-errors -Wall -c Gengar.cpp
Dragonite.o : Dragonite.cpp Dragonite.h
	g++ -ansi -pedantic-errors -Wall -c Dragonite.cpp

