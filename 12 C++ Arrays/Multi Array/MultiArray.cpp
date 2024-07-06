#include<iostream>

using namespace std;
int main()
{

    // create a 2d array 

    char data[3][3];

    data[0][0] = 'a';
    data[0][1] = 'b';
    data[0][2] = 'k';
    data[1][0] = 'c';
    data[1][1] = 'd';
    data[1][2] = 'l';
    data[2][0] = 'e';
    data[2][1] = 'f';
    data[2][2] = 'm';
    // print the 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << data[i][j] << " ";
            }
            cout << endl;
    }

    return 0;

}