#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream sstream(s);
    string word;

    while (sstream >> word) {
        reverse(word.begin(), word.end());

        if (sstream.peek() == ' ') {
            cout << word << " ";
        } else {
            cout << word;
        }
    }

    return 0;
}


