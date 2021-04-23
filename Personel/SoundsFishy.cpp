#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    int x;
    int y;
    int z;
    cin >> w >> x >> y >> z;
    if (w < x and w < y and w < z) {
        cout << "Fish Rising" << endl;
    } else if (w > x and x > y and y > z)  {
        cout << "Fish Diving" << endl;
    } else if (w == x and x == y and y == z) {
        cout << " Fish At Constant Depth" << endl;
    } else {
        cout << "No Fish" << endl;
    }

    return 0;
}