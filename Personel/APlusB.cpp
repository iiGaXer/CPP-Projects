#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[1][2];
    for(int i=0; i < 1; i++) {
        for (int j=0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    int multiply = a[0][0] * 10;
    int total = multiply + a[0][1];

    cout << total << endl;


    return 0;
}