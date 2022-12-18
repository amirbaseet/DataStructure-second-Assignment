#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>
#include "Linkedlist.hpp"
#include "Queue.hpp"
#include "Radix.hpp"

using namespace std;
int main()
{
    ifstream myfile("src/Data.txt");
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
    myfile.open("src/Data.txt");
    Linkedlist *tissues = new Linkedlist[line_counter]; // lines
    int at = 0;
    string str;
    // finding the number of
    int tissue_counter = 0; //
    while (std::getline(myfile, bosluk))
    {
        istringstream ss(bosluk);
        while (getline(ss, str, ' '))
        {
            tissues[tissue_counter].addNode(stoi(str));
        }
        tissue_counter++;
    }
    myfile.close();
    cout << tissues[101];
    cout << "\nAfrer sorting()\n";
    for (int i = 0; i < line_counter; i++)
    {
        tissues[i].sort();
    }
    cout << tissues[101];

    // Queue tt;
    // for (int i = 1; i <= 9; i++)
    // {
    //     /* code */
    //     tt.add(i);
    // }
    // cout << tt;
    // cout << tt.get_Organ();

    // Linkedlist Test;
    // for (int i = 99; i >= 1; i--)
    // {
    //     Test.addNode(i);
    // }
    // cout << "\nBefore sorting()\n";
    // cout << Test;
    // cout << "\n *************************************************************\n";
    // Test.sort();
    // cout << "\nAfrer sorting()\n";
    // cout << Test;
    // // int *test = Test.LinkedToArray();
    // // for (int i = 0; i < 10; i++)
    // // {
    // //     cout << test[i] << " ";
    // // }

    // // Radix d(test, 10);
    // // int *ss = d.sort();
    // // cout << "After" << endl;
    // // for (int i = 0; i < 10; i++)
    // // {
    // //     cout << ss[i] << " ";
    // // }
}
