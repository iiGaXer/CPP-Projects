#include <bits/stdc++.h>

using namespace std;

int main() {
    int Dimension[7] = {5, 2, 7, 3, 9, 10, 6};
    int total;
    for(int i=0; i < 7; i++) {
        total += Dimension[i];
    }
    cout << total << endl;

    return 0;
}