#include <bits/stdc++.h>

using namespace std;

int main() {
    int S;
    int M;
    int L;
    cin >> S >> M >> L;
    int total = (1 * S) + (2 * M) + (3 * L);
    if (total >= 10) {
        cout << "happy" << endl;
    } else if (total < 10) {
        cout << "sad" << endl;
    }

    return 0;
}