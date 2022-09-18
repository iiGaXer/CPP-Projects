#include <bits/stdc++.h>

using namespace std;

int main() {
    int stretchiness;
    int clothing_size;
    cin >> stretchiness >> clothing_size;

    int eggs_size = ((stretchiness + 2)*3) + 16;

    if (1 <= stretchiness <= 20 && 1 <= clothing_size <=150) {
        if (eggs_size <= clothing_size) {
            cout << "Yes it fits!";
        } else if (eggs_size >= clothing_size) {
            cout << "No, it's too small :(";
        }
    }


    return 0;
}