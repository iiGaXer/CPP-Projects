#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int k;
    cin >> N;
    cin >> k;
    if (0 <= k <= 5) {
        if (k == 0) {
            cout << N << endl;
        } else if (k == 1) {
            cout << N + (N * 10) << endl;
        } else if (k == 2) {
            cout << N + (N * 10) + (N * 100) << endl;
        } else if (k == 3) {
            cout << N + (N * 10) + (N * 100) + (N * 1000)  << endl;
        } else if (k == 4) {
            cout << N + (N * 10) + (N * 100) + (N * 1000) + (N * 10000) << endl;
        } else if (k == 5) {
            cout << N + (N * 10) + (N * 100) + (N * 1000) + (N * 10000) + (N *100000) << endl;
        }
    }


    return 0;
}