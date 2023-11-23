#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        
        int oddCount = 0, evenCount = 0;
        
        for (int i = 0; i < n; i++)
        {
           if(a[i] % 2 == 0) evenCount++;
           else oddCount++;
        }

         int operations = abs(evenCount - oddCount) / 2;

        if ((evenCount + oddCount) % 2 == 0) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
