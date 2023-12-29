#include <bits/stdc++.h>

using namespace std;

int main () {
    string s;
    cin >> s;
    for (string :: iterator it = s.begin(); it < s.end(); it++)
    {
        char currentChar = *it;
        cout << currentChar;
    }
    
    return 0;
}