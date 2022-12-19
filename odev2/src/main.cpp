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
#include "Bsystem.hpp"

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
    cout << "\nFirst 20 ORGAN\n";
    for (int i = 0; i < line_counter; i++)
    {
        tissues[i].sort();
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "Organelement [" << i << "] =" << tissues[i].Ret_Organ() << endl;
    }

    const int NumOfOrgans = line_counter / 20;
    const int NumOfSystems = NumOfOrgans / 100;
    // cout << "\nNumOfOrgans" << NumOfOrgans;
    // cout << "\nNumOfSystems" << NumOfSystems;
    int Organ_counter = 0;
    Organ *organ = new Organ[NumOfOrgans];
    // for (int i = 0; i < line_counter;)
    // {
    //     while (organ->is_tweny() == false)
    //     {
    //         // if (i < 20)

    //         cout << "adding element " << tissues[i].Ret_Organ() << endl;
    //         organ[Organ_counter].addElement(tissues[i].Ret_Organ());
    //         i++;
    //     }
    //     Organ_counter++;
    // }
    for (int i = 0; i < line_counter;)
    {
        while (organ[Organ_counter].is_tweny() == false)
        {
            organ[Organ_counter].addElement(tissues[i].Ret_Organ());
            i++;
        }
        Organ_counter++;
    }

    organ->PrintPostOrder();
    cout << "\nMUTABILITY " << organ->ret_mutability() << "\t ROOT" << organ->retFirst()->key << endl;
    Bsystem *Organsim = new Bsystem[NumOfSystems];
    int Organsim_counter = 0;
    for (size_t i = 0; i < NumOfOrgans;)
    {
        while (Organsim[Organsim_counter].GetNodeNum() != 100)
        {
            Organsim[Organsim_counter].AddBst_Node(&organ[i]);
            i++;
        }
        Organsim_counter++;
    }

    // organ->addElement(1);
    // Bsystem a;
    // a.AddBst_Node(organ);
    // organ->PrintPostOrder();
}
