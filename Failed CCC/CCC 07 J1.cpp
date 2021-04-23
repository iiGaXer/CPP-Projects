#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    if (x and y and z < 100) {
        if (x > y > z || x < y < z) {
            cout << y << endl;
        } else if (y > x > z || y < x < z) {
            cout << x << endl;
        } else if (x > z > y || x < z < y) {
            cout << z << endl;
        }
    }

    return 0;
}