#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin>>n;
    int ar[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];

        mx = max(mx, ar[i]);
        
    }
        cout<<mx;
    
    return 0;
}