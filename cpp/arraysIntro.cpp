#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n; 
    int numArr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numArr[i] = num;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << numArr[i] << " ";
    }
    return 0;
}

