#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    char player;
    char total;
    char W;
    char L;
    char G1[2];
    G1[0] = 6;
    G1[1] = 5;
    char G2[2];
    G2[0] = 4;
    G2[1] = 3;
    char G3[2];
    G3[0] = 2;
    G3[1] = 1;
    total = 0;
    cin >> player;
    cin >> G1;
    cin >> G2;
    cin >> G3;
    cin >> W;
    cin >> L;
    
    if (total + W + L = G1) {
          cout << "Group 1" << endl;
    } else if (total + W + L = G2) {
          cout << "Group 2" << endl;
    } else if (total + W + L = G3) {
          cout << "Group 3" << endl;
    } else {
          cout << "Failed." << endl;
    }
    return 0;
}

 
    