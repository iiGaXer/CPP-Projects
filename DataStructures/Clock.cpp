#include <bits/stdc++.h>

using namespace std;

int main() {
    int hours = 24;
    int mins = 60;

    for(int hour=0; hour < hours; hour++) {
        for(int j=0; j < mins; j++) {
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << j << endl;
        }
    }


    return 0;
}