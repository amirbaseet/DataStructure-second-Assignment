#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>
#include "Linkedlist.hpp"
#include "Queue.hpp"
#include "Radix.hpp"
#include "BST.hpp"
#include "Tissue.hpp"
#include "Organ.hpp"

using namespace std;
int main()
{
    ifstream myfile("Data.txt");
    // read line
    int line_counter = 0;
    string satir;
    string bosluk = " ";

    /* code */
    if (!myfile)
        cout << "ERR\n";
    // Finding the number of the raow
    while (getline(myfile, satir))
    {
        line_counter++;
    }
    cout << line_counter << endl;
    myfile.close();
    myfile.open("Data.txt");
    // Linkedlist *Linkedlists = new Linkedlist[line_counter]; // lines
    Tissue *tissues = new Tissue[line_counter]; // lines
    int at = 0;
    string str;
    // finding the number of
    int tissue_counter = 0; //
    while (std::getline(myfile, bosluk))
    {
        istringstream ss(bosluk);
        while (getline(ss, str, ' '))
        {
            // Linkedlists[Linkedlist_counter].addLinked_Node(stoi(str));
            tissues[tissue_counter].add_cell(stoi(str));
        }
        tissue_counter++;
    }
    myfile.close();
    cout << tissues[0];
    cout << "\nAfrer sorting()\n";

    Organ Tester;
    // for (size_t i = 0; i < 19; i++)
    // {
    //     Tester.addElement(i);
    // }
    Tester.PrintPostOrder();
    BST A;
    for (size_t i = 0; i < 19; i++)
    {
        A.AddLeaf(i);
    }
    A.PrintPostOrder();
}
