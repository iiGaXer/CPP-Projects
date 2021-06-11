#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int not_occupied = 0;

    string yesterday, today;
    cin >> yesterday >> today;

    for(int i=0; i < N; i++) {
        if(yesterday[i] == 'C' && today[i] == 'C') {
            not_occupied++;
        }
    }

    cout << not_occupied << endl;

    return 0;
}