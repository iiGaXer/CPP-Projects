#include <bits/stdc++.h>

using namespace std;

int main() {    
    int inputs[3];
    for(int i=0; i < 3; i++) {
        cin >> inputs[i];
    }

    sort(inputs, inputs + 3);

    cout << inputs[1] << endl;

    return 0;
}