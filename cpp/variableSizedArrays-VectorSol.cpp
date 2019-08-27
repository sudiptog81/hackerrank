#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, i, j, len, temp;
    cin >> n >> q;

    // create a vector of size n
    vector<vector<int>> parentArray(n);

    // fill each element of parent vector with a
    // variable-length vector
    for (int i = 0; i < parentArray.size(); i++)
    {
        cin >> len;

        // fill 'len' cells in the inner vector
        for (int j = 0; j < len; j++)
        {
            cin >> temp;
            parentArray[i].push_back(temp);
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
