#include <bits/stdc++.h>

using namespace std;

int main() {
    int current_time;
    cin >> current_time;

    if (current_time < 7) {
        current_time += 2;
    }

    cout << "0" << current_time << ":00" << endl;



    return 0;
}