#include <bits/stdc++.h>

using namespace std;

int main() {
    int month;
    int day;
    cin >> month;
    cin >> day;
    if (1 <= month and month <= 12) {
        if (1 <= day and day <= 31) {
            if (month <= 2) {
                if (month == 1 || day < 18) {
                    cout << "Before" << endl;
                } else if (day == 18) {
                    cout << "Special" << endl;
                } 
            else if (month > 2 and day == 18 || month == 2 and day > 18 || month > 2 and day > 18) {
                cout << "After" << endl;
            }
            }

        }
    }


    return 0;
}