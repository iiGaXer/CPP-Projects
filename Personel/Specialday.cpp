#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int month;
    int day;
    cin >> month; 
    cin >> day;
    if (month == 2 && day == 18) {
        cout << "Special" << endl;
    } else if (month <= 2 && day < 18 || (month < 2))  {
        cout << "Before" << endl;
    } else {
        cout << "After" << endl;
    }
    return 0;
}