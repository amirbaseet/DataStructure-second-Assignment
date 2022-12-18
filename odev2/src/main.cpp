#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>
#include "Tissue.hpp"
#include "Queue.hpp"
#include "Radix.hpp"
#include "BST.hpp"
using namespace std;
int main()
{
    // ifstream myfile("src/Data.txt");
    // // read line
    // int line_counter = 0;
    // string satir;
    // string bosluk = " ";

    // /* code */
    // if (!myfile)
    //     cout << "ERR\n";
    // // Finding the number of the raow
    // while (getline(myfile, satir))
    // {
    //     line_counter++;
    // }
    // cout << line_counter << endl;
    // myfile.close();
    // myfile.open("src/Data.txt");
    // Tissue *tissues = new Tissue[line_counter]; // lines
    // int at = 0;
    // string str;
    // // finding the number of
    // int tissue_counter = 0; //
    // while (std::getline(myfile, bosluk))
    // {
    //     istringstream ss(bosluk);
    //     while (getline(ss, str, ' '))
    //     {
    //         tissues[tissue_counter].addCellNode(stoi(str));
    //     }
    //     tissue_counter++;
    // }
    // myfile.close();
    // cout << tissues[101];
    // cout << "\nAfrer sorting()\n";
    // for (int i = 0; i < line_counter; i++)
    // {
    //     tissues[i].sort();
    // }
    // cout << tissues[101];

    // Queue tt;
    // for (int i = 1; i <= 9; i++)
    // {
    //     /* code */
    //     tt.add(i);
    // }
    // cout << tt;
    // cout << tt.get_Organ();

    // Tissue Test;
    // for (int i = 99; i >= 1; i--)
    // {
    //     Test.addCellNode(i);
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
    BST AS;
    // AS.PrintInOrder();

    AS.AddLeaf(100);
    AS.AddLeaf(1);
    AS.AddLeaf(400);
    AS.AddLeaf(10);
    AS.AddLeaf(4);
    AS.AddLeaf(3);
    AS.AddLeaf(77);
    AS.AddLeaf(55);
    AS.AddLeaf(99999);

    cout << "\nTHE NUM " << AS.ReturnNumOfNodes() << endl;

    AS.PrintPostOrder();
    // AS.BstTOLinked();
    // cout << endl;
    // AS.PrintLinked();
    int *arr = AS.BstTOArray();
    AS.del_AllNodes();
    cout << "\n"
         << endl;
    for (int i = 0; i < 9; i++)
    {
        AS.AddLeaf(arr[i]);
        cout << arr[i] << " ";
    }
    cout << "\n"
         << endl;

    AS.PrintPostOrder();
    AS.PrintLinked();
}
