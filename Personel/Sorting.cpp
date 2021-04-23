#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[n] = {};
    for(int i=0; i < n; i++) {
        cin >> numbers[i];
        if (i == n - 1) {
            sort(numbers, numbers + n);
        }
    }
    for(int i=0; i < n; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}