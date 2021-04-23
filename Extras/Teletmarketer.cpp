#include <bits/stdc++.h>

using namespace std;

int main() {
    int first;
    int second;
    int third;
    int fourth;
    cin >> first >> second >> third >> fourth;
    if (first == 8 || first == 9) {
        if (fourth == 8 || fourth == 9) {
            cout << "ignore" << endl;
        }
    } else if (first != 8 || first != 9) {
        if (fourth != 8 || fourth != 9) {
            cout << "answer" << endl;
        }
    }

    return 0;
}