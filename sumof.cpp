#include <bits/stdc++.h>

using namespace std;

int main() {
    int x_0;
    int x_1;
    int x_2;
    int x_3;
    int x_4; 
    int total;
    for (int i = 0; i < 100000; i++) {
        x_0 = i / 10000;
        x_1 = (i % 10000) / 1000;
        x_2 = (i % 1000) / 100;
        x_3 = (i % 100) / 10;
        x_4 = i % 10;

        total = x_0 + x_1 + x_2 + x_3 + x_4;
        if (total == 3) {
            cout << i << endl;
        }
    }

    return 0;
}