#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers;
    cin >> numbers;
    int index;
    int list[numbers] = {};
    for(int i=0; i < numbers; i++) {
        cin >> index;
        list[i] = index;
        if (i == numbers - 1) {
            sort(list, list + numbers);
        }
    }
    for(int i=0; i < numbers; i++) {
        cout << list[i] << endl;
    }

    return 0;
}