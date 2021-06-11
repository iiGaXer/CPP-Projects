#include <bits/stdc++.h>

using namespace std;

int main() {
    int B;
    cin >> B;
    int P = 5 * B - 400;
    if (B >= 80 and B <= 200) {
        if (P != 100) {
            if (P < 100) {
                cout << P << endl;
                cout << "1" << endl;
            } else if (P > 100) {
                cout << P << endl;
                cout << "-1" << endl;
            }
        } else if (P == 100) {
            cout << P << endl;
            cout << "0" << endl;
        }
    }

    return 0;
}