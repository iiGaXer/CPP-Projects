#include <bits/stdc++.h>

using namespace std;

void icon_scaling() {
    char grid_3x3[3][3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'}, 
        {'*', ' ', '*'}
    };
    int k;
    cin >> k;

    for(int row=0; row < 3; row++) {
        for(int h=0; h < k; h++) {
            for(int column=0; column < 3; column++) {
                for(int l=0; l < k; l++) {
                    cout << grid_3x3[row][column];
                }
            }
            cout << endl;           
        }
    }

}

int main() {
    icon_scaling();
}