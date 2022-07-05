#include <iostream>

using namespace std;

// this program will take in an interger and print out a series of asterisks and print them out in a pyramid formation
int main()

{
    /* This will print a half pyramid, my own code

    for (int pyramid{1}; pyramid <= 30; pyramid+=2)
    {
        char aster {'*'};
        cout << string(pyramid, aster) << endl;
    }

    */
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int pyramid{1}, aster{0}; pyramid <= rows; pyramid++, aster = 0)
     {
        for(space = 1; space <= rows-pyramid; space++)
        {
            cout <<"  ";
        }

        while(aster < 2*pyramid-1)
        {
            cout << "* ";
            aster++;
        }
        cout << endl;
    }    
}
