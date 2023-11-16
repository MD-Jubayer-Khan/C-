#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;

    // Input the array elements
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A, A + N);

    // Output the sorted array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    return 0;
}