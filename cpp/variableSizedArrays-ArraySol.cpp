#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, i, j, len;
    cin >> n >> q;

    // create a pointer to an array of pointers
    // to integer arrays
    int **parentArray = new int *[n];

    // fill each element of parent array with a
    // variable-length array
    for (int i = 0; i < n; i++)
    {
        cin >> len;

        // create an array of length 'len' at i
        parentArray[i] = new int[len];

        // fill 'len' cells in the inner array
        for (int j = 0; j < len; j++)
        {
            cin >> parentArray[i][j];
        }
    }

    // perform queries
    for (int k = 0; k < q; k++)
    {
        cin >> i >> j;
        cout << parentArray[i][j] << endl;
    }

    return 0;
}
