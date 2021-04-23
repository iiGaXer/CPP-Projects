#include <bits/stdc++.h>

using namespace std;

int main() {
        int four_by_four[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0}, 
        {0, 0, 0, 0}, 
        {0, 0, 0, 0} 
    };

    // //? The variables that will represent the sum of each row in the 4x4.
    int row_1 = 0; 
    int row_2;
    int row_3;
    int row_4;
    // //? The variables that will represent the sum of each collum in the 4x4.
    int collum_1;
    int collum_2;
    int collum_3;
    int collum_4;

    //* All rows and columns becoming inputed values:
    for(int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            cin >> four_by_four[i][j];        
        }    
    }

    for (int i = 0; i < 4; i++) {
        row_1 += four_by_four[0][i];
        row_2 += four_by_four[1][i];
        row_3 += four_by_four[2][i];
        row_4 += four_by_four[3][i];
        //* Column total
        collum_1 += four_by_four[i][0];
        collum_2 += four_by_four[i][1];
        collum_3 += four_by_four[i][2];
        collum_4 += four_by_four[i][3];
    } 

    cout << " " << endl;
    cout << row_1 << endl;
    cout << row_2 << endl;
    cout << row_3 << endl;
    cout << row_4 << endl;

    cout << collum_1 << endl;
    cout << collum_2 << endl;
    cout << collum_3 << endl;
    cout << collum_4 << endl;

    return 0;
}