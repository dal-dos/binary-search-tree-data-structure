#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

// Test program
int main()
{
    BinarySearchTree<int> t;
    //    int NUMS = 400000;
    int NUMS = 25;
    const int GAP = 3;
    const int CAP = 19;
    int i;
    int key;

    cout << "Start of BSTtestDD" << endl;

    key = CAP / 2;
    for (i = 1; i <= NUMS; i++) {
        key = (key + GAP) % CAP;
        t.insert(key);
    }

    if (NUMS < 40) {
        t.displayDeep(3);
    }

    /*
        for( i = 1; i < NUMS; i+= 2 )
            t.remove( i );

        if( NUMS < 40 ) t.printTree( );

        BinarySearchTree<int> t2;
        t2 = t;
    */
    cout << "End of BSTtestDD" << endl;

    return 0;
}