all: compile Debug start
compile:	
		g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
		g++ -c -I "./include" ./src/CellNode.cpp -o ./lib/CellNode.o
		g++ -c -I "./include" ./src/Tissue.cpp -o ./lib/Tissue.o
		g++ -c -I "./include" ./src/Queue.cpp -o ./lib/Queue.o
		g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
		g++ -c -I "./include" ./src/TNode.cpp -o ./lib/TNode.o
		g++ -c -I "./include" ./src/BST.cpp -o ./lib/BST.o
Debug:
		g++ ./lib/main.o ./lib/CellNode.o ./lib/Tissue.o ./lib/Queue.o ./lib/Radix.o ./lib/TNode.o  ./lib/BST.o -o ./bin/program
start:
	bin/program
