#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;    
    //! ^(Above) The idea
    int telemarketer[4] = {};
    cin >> telemarketer[0] >> telemarketer[1];
    cin >> telemarketer[2] >> telemarketer[3];
    //* ^ (Above) all the inputed-phone numbers.
    if (telemarketer[0] == 8 || telemarketer[0] == 9) {
        if (telemarketer[3] == 9 || telemarketer[3] == 8) {
            if (telemarketer[1] == telemarketer[2]) {
                sum += 3;           
            }
        }
    //? ^ (Above) is a if-loop used if they have the following numbers.
    } if (sum == 3) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }
    return 0;
}

void telemarketer_original() {
    int telemarketer[4] = {0, 0, 0, 0};
    cin >> telemarketer[0] >> telemarketer[1];
    cin >> telemarketer[2] >> telemarketer[3];
    //* ^ all the inputed-phone numbers.
    if (telemarketer[0] == 8 || telemarketer[0] == 9) {
        if (telemarketer[3] == 9 || telemarketer[3] == 8) {
            if (telemarketer[1] == telemarketer[2]) {
                cout << "ignore" << endl;                
            }

        }
    } else if (telemarketer[0] != 8 || telemarketer[0] != 9) {
        if (telemarketer[3] != 9 || telemarketer[3] != 8) {
            if (telemarketer[1] != telemarketer[2]) {
                cout << "answer" << endl;                
            }

        }
    }
}

void telemarketer_now() {
    int telemarketer[4] = {0, 0, 0, 0};
    cin >> telemarketer[0] >> telemarketer[1];
    cin >> telemarketer[2] >> telemarketer[3];
    //* ^ (Above) all the inputed-phone numbers.
    if (telemarketer[0] == 8 || telemarketer[0] == 9) {
        if (telemarketer[3] == 9 || telemarketer[3] == 8) {
            if (telemarketer[1] == telemarketer[2]) {
                cout << "ignore" << endl;             
            }
        }
    //? ^ (Above) is a if-loop used if they have the following numbers.
    } else if (telemarketer[0] != 8 || telemarketer[0] != 9 || telemarketer[3] != 9 || telemarketer[3] != 8 || telemarketer[1] != telemarketer[2]) {
        cout << "answer" << endl;
    }

}

void telemarketer_idea() {
    int sum = 0;    
    //! ^(Above) The idea
    int telemarketer[4] = {0, 0, 0, 0};
    cin >> telemarketer[0] >> telemarketer[1];
    cin >> telemarketer[2] >> telemarketer[3];
    //* ^ (Above) all the inputed-phone numbers.
    if (telemarketer[0] == 8 || telemarketer[0] == 9) {
        if (telemarketer[3] == 9 || telemarketer[3] == 8) {
            if (telemarketer[1] == telemarketer[2]) {
                sum += 3;           
            }
        }
    //? ^ (Above) is a if-loop used if they have the following numbers.
    } if (sum == 3) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }


}



