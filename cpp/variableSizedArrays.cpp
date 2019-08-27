#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q, i, j, len;
    cin >> n >> q;
    vector<vector<int>> parentArray(n);
    for (int i = 0; i < parentArray.size(); i++)
    {
        int temp;
        cin >> len;
        for (int j = 0; j < len; j++)
        {
            cin >> temp;
            parentArray[i].push_back(temp); 
        }
    }
    for(int k = 0; k < q; k++)
    {
        cin >> i >> j;
        cout << parentArray[i][j] << endl;
    }
    return 0;
}

