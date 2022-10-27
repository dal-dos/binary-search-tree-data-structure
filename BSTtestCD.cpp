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

    cout << "Start of BSTtestCD" << endl;

    key = CAP / 2;
    for (i = 1; i <= NUMS; i++) {
        key = (key + GAP) % CAP;
        t.insert(key);
    }

    if (NUMS < 40) {
        cout << 4 << endl;
        cout << t.countDeep(2) << endl;
    }

    /*
        for( i = 1; i < NUMS; i+= 2 )
            t.remove( i );

        if( NUMS < 40 ) t.printTree( );

        BinarySearchTree<int> t2;
        t2 = t;
    */
    cout << "End of BSTtestCD" << endl;

    return 0;
}