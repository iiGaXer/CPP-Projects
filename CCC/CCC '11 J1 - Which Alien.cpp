#include <bits/stdc++.h>

using namespace std;

int main() {
    int antenna;
    int eyes;
    cin >> antenna;
    cin >> eyes;
    if (antenna >= 3 && eyes <= 4) {
        cout << "TroyMartian" << endl;
    }
    if (antenna <= 6 && eyes >= 2) {
        cout << "VladSaturnian" << endl;
    }
    if (antenna <= 2 && eyes <= 3) { 
        cout << "GraemeMercurian" << endl;
    }
    return 0;
}