#include <bits/stdc++.h>

using namespace std;

int main () {
    int x, n;
    cin >> x >> n;
    int equation = 0;

    for (int i = 2; i <= n; i += 2) {
        equation += pow(x *1.0, i *1.0);
    }

    cout << equation;
    return 0;
}

