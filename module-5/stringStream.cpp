#include <bits/stdc++.h>

using namespace std;

int main () {
    string str;
    getline(cin,str);
    stringstream sstream(str);
    string getWord;
    while (sstream >> getWord)
    {
        cout << getWord << endl;
    }
    

    return 0;
}