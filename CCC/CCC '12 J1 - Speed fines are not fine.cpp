#include <bits/stdc++.h>

using namespace std;

int main() {
    int speed_limit;
    int speed;
    cin >> speed_limit;
    cin >> speed;
    if ((speed - speed_limit) >= 1 and (speed - speed_limit) <= 20){
        cout << "You are speeding and your fine is $100." << endl;
    }
    else if ((speed - speed_limit) >= 21 and (speed - speed_limit) <= 30) {
        cout << "You are speeding and your fine is $270." << endl;
    }
    else if ((speed - speed_limit) >= 31) {
        cout << "You are speeding and your fine is $500."<< endl;
    }
    else {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }
   

    return 0;
}
