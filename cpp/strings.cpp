#include <string>
#include <iostream>
using namespace std;

void displayLengths(string, string);
void concatenate(string, string);
void swapFunc(string, string);

int main()
{
    int i;
    string s1, s2;
    cin >> s1 >> s2;
    displayLengths(s1, s2);
    concatenate(s1, s2);
    swapFunc(s1, s2);
    return 0;
}

void displayLengths(string s1, string s2)
{
    cout << s1.size() << " "
         << s2.size() << endl;
    return;
}

void concatenate(string s1, string s2)
{
    string temp;
    temp += s1;
    temp += s2;
    cout << temp << endl;
    return;
}

void swapFunc(string s1, string s2)
{
    char temp;
    temp  = s2[0];
    s2[0] = s1[0];
    s1[0] = temp;
    cout << s1 << " "
         << s2;
    return;
}