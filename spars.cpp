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

                  int representsparse[3][s];
    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (sparse[i][j] != 0) {
                representsparse[0][k] = i;
                representsparse[1][k] = j;
                representsparse[2][k] = sparse[i][j];
                k++;
            }
    cout << "Representation of Sparse array using arrays : "
            "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < s; j++)
            cout << " " << representsparse[i][j];
        cout << "\n";
    }
    return 0;
}
