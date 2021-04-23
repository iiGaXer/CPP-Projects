#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, C, E;
    int B, D, F;
    cin >> A >> C >> E;
    cin >> B >> D >> F;
    int Team_apples = (A * 3) + (C * 2) + (E * 1);
    int Team_bannanas = (B* 3) + (D * 2) + (F * 1);
    if (Team_apples > Team_bannanas) {
        cout << "A" << endl;
    } else if (Team_bannanas > Team_apples) {
        cout << "B" << endl;
    } else if (Team_apples == Team_bannanas) {
        cout << "T" << endl;
    }

    return 0;
}