#include <bits/stdc++.h>

using namespace std;

void n() {

    int unknown;
    cin >> unknown;
    //? statement for n value.
    if (unknown == 1 || unknown > 8) {
        cout << "1" << endl;
    } else if (unknown > 3 && unknown < 7) {
        cout << "3" << endl;
    } else {
        cout << "2" << endl;
    }

}

int main() {
    n();
    return 0;
}