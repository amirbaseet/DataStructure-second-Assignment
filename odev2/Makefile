all: compile Debug start
compile:	
		g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
		g++ -c -I "./include" ./src/Linked_Node.cpp -o ./lib/Linked_Node.o
		g++ -c -I "./include" ./src/Linkedlist.cpp -o ./lib/Linkedlist.o
		g++ -c -I "./include" ./src/Queue.cpp -o ./lib/Queue.o
		g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
		g++ -c -I "./include" ./src/Tissue.cpp -o ./lib/Tissue.o
		g++ -c -I "./include" ./src/BST_Node.cpp -o ./lib/BST_Node.o
		g++ -c -I "./include" ./src/BST.cpp -o ./lib/BST.o
		g++ -c -I "./include" ./src/BSTlinkedNode.cpp -o ./lib/BSTlinkedNode.o
		g++ -c -I "./include" ./src/BSTlinkedList.cpp -o ./lib/BSTlinkedList.o

Debug:
		g++ ./lib/main.o ./lib/Linked_Node.o ./lib/Linkedlist.o ./lib/Queue.o ./lib/Radix.o ./lib/Tissue.o ./lib/BST_Node.o  ./lib/BST.o ./lib/BSTlinkedNode.o ./lib/BSTlinkedList.o -o ./bin/program
start:
	bin/program
