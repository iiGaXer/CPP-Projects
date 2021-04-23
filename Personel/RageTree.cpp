#include <bits/stdc++.h>

using namespace std;

int main() {
    //? Variable-array order:
    int orders[4] = {};
    cin >> orders[0] >> orders[1];
    cin >> orders[2] >> orders[3];
    //* sorts the numbers out
    sort(orders, orders + 4);
    cout << orders[0] << endl;
    cout << orders[3] << endl;

    return 0;
}