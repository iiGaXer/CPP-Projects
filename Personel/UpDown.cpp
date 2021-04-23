#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;
    int total_1 = (a - b) + (a - b);
    int total_2 = (c - d) + a;
    if (1 <= a and a <= 100 and a >= b and c >= d and 1 <= s and s <= 10000) {
        if (total_1 > total_2) {
            cout << "Nikky" << endl;
        } else if (total_2 > total_1) {
            cout << "Byron" << endl;
        } else if (total_1 == total_2) {
            cout << "Tied" << endl;
        }
    }

    return 0;
}