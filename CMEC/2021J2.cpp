#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A = N + 2;
    int replicate = N * 1 - 1;
    int number;
    int array[N];
    string names[N];
    string name;
    while (N--) {
        for (int i = 1; i <= N; i++) {
            cin >> name;
            names[i] += name;
            cin >> number;
            array[i] += number;
        }
    }
    cout << names[replicate] << endl;
    return 0;
}