// Implementation of array representation
// of the sparse array
#include <iostream>
using namespace std;

int main()
{
    int sparse[4][4] = { { 0, 0, 7, 0 },
                         { 1, 0, 0, 0 },
                         { 2, 0, 5, 0 },
                         { 0, 8, 0, 4 } };
    int s = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (sparse[i][j] != 0)
                s++;
