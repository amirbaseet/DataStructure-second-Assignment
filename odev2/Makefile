all: compile Debug start
compile:	
		g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
		g++ -c -I "./include" ./src/LNode.cpp -o ./lib/LNode.o
		g++ -c -I "./include" ./src/Linkedlist.cpp -o ./lib/Linkedlist.o
		g++ -c -I "./include" ./src/Queue.cpp -o ./lib/Queue.o
		g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
Debug:
		g++ ./lib/main.o ./lib/LNode.o ./lib/Linkedlist.o ./lib/Queue.o ./lib/Radix.o -o ./bin/program
start:
	bin/program
