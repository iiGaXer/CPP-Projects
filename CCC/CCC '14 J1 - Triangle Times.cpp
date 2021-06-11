#include <bits/stdc++.h>

using namespace std;

int main() {
    int angle_1;
    int angle_2;
    int angle_3;
    int total = angle_1 + angle_2 + angle_3;
    cin >> angle_1;
    cin >> angle_2;
    cin >> angle_3;
    if ((angle_1, angle_2 && angle_3) > 0 and(angle_1, angle_2 && angle_3) < 180) {
        if (angle_1 == 60 and angle_2 == 60 and angle_3 == 60) {
            cout << "Equilateral" << endl;
        } else if (total = 180 && angle_1 == angle_2 || angle_1 == angle_3 || angle_2 == angle_3) {
        cout << "Isosceles" << endl;
        } else if ((angle_1 + angle_2 + angle_3) != 180) {
            cout << "Error" << endl;
        } else if (total = 180 && angle_1 != angle_2 or angle_2 != angle_3 or angle_1 != angle_3) {
            cout << "Scalene" << endl;
        }
    }
    return 0;
}