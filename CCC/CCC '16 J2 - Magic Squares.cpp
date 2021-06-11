#include <bits/stdc++.h>

using namespace std;

void magic_sqaure_beginning() {
    int four_by_four[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0}, 
        {0, 0, 0, 0}, 
        {0, 0, 0, 0} 
    };
    //* All rows and columns becoming inputed values:
    for(int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            cin >> four_by_four[i][j];
        }
    }

    // //? The variables that will represent the sum of each row in the 4x4.
    int row_1 = four_by_four[0][0] + four_by_four[0][1] + four_by_four[0][2] + four_by_four[0][3]; 
    int row_2 = four_by_four[1][0] + four_by_four[1][1] + four_by_four[1][2] + four_by_four[1][3];
    int row_3 = four_by_four[2][0] + four_by_four[2][1] + four_by_four[2][2] + four_by_four[2][3];
    int row_4 = four_by_four[3][0] + four_by_four[3][1] + four_by_four[3][2] + four_by_four[3][3];
    // //? The variables that will represent the sum of each collum in the 4x4.
    int collum_1 = four_by_four[0][0] + four_by_four[1][0] + four_by_four[2][0] + four_by_four[3][0];
    int collum_2 = four_by_four[0][1] + four_by_four[1][1] + four_by_four[2][1] + four_by_four[3][1];
    int collum_3 = four_by_four[0][2] + four_by_four[1][2] + four_by_four[2][2] + four_by_four[3][2];
    int collum_4 = four_by_four[0][3] + four_by_four[1][3] + four_by_four[2][3] + four_by_four[3][3];

    if (row_1 == collum_1) {
        if (collum_1 == row_2 & row_2 == collum_2) {
            if (collum_2 == row_3 & row_3 == collum_3) {
                if (collum_3 == row_4 & row_4 == collum_4) {
                    cout << "magic" << endl;
                }
            }
        }
    } else {
        cout << "not magic" << endl;
    }
}

void magic_sqaure_else_if() {
    int four_by_four[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0} 
    };
    //! Nested-For loop for cin:
    for(int i=0; i < 4; i++) {
        for(int a=0; a < 4; a++) {
            cin >> four_by_four[i][a];
        }
    }
    //? The variables that will represent the sum of each row in the 4x4.
    int row_1 = four_by_four[0][0] + four_by_four[0][1] + four_by_four[0][2] + four_by_four[0][3]; 
    int row_2 = four_by_four[1][0] + four_by_four[1][1] + four_by_four[1][2] + four_by_four[1][3];
    int row_3 = four_by_four[2][0] + four_by_four[2][1] + four_by_four[2][2] + four_by_four[2][3];
    int row_4 = four_by_four[3][0] + four_by_four[3][1] + four_by_four[3][2] + four_by_four[3][3];
    //? The variables that will represent the sum of each collumn in the 4x4.
    int collum_1 = four_by_four[0][0] + four_by_four[1][0] + four_by_four[2][0] + four_by_four[3][0];
    int collum_2 = four_by_four[0][1] + four_by_four[1][1] + four_by_four[2][1] + four_by_four[3][1];
    int collum_3 = four_by_four[0][2] + four_by_four[1][2] + four_by_four[2][2] + four_by_four[3][2];
    int collum_4 = four_by_four[0][3] + four_by_four[1][3] + four_by_four[2][3] + four_by_four[3][3];

    if (row_1 == collum_1) {
        if (collum_1 == row_2 & row_2 == collum_2) {
            if (collum_2 == row_3 & row_3 == collum_3) {
                if (collum_3 == row_4 & row_4 == collum_4) {
                    cout << "magic" << endl;
                }
            }
        }
    } else {
        cout << "not magic" << endl;
    }
}

//! Here is my finished code, the star coding.
void magic_sqaure() {
    int four_by_four[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0}, 
        {0, 0, 0, 0}, 
        {0, 0, 0, 0} 
    };
  
    //? The variable that will represent the sum of each row in the 4x4.
    int rows[4] = {0, 0, 0, 0};
    //? The variables that will represent the sum of each collum in the 4x4.
    int collums[4] = {0, 0, 0, 0};

    //* All rows and columns becoming inputed values:
    for(int i=0; i < 4; i++) { 
        for(int j=0; j < 4; j++) {
            cin >> four_by_four[i][j];
        }
    }

    //* Inputs each row and columns, add all the numbers, for example
    //* - in 1 row, and then put's all those numbers in index 0, 
    //* - for example
    for(int i = 0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
        //* Row total 
        rows[i] += four_by_four[i][j];
        //* Column total
        collums[i] += four_by_four[j][i];
        }
    } 
    
    //* The variable "x", has the following value:  
    //? - sum of 1 row 
    int x = rows[0];
    bool Magical = false;
    //* If x is equal to rows and collums, Magical is true
    //* - else, false
    for(int i = 0; i < 4; i++) {
        if (x == rows[i] && collums[i] == x) {
            Magical = true;
        } else if (x != rows[i] && collums[i] != x) {
            Magical = false;
        } else {
            Magical = false;
        }
    }

    //* Pretty obvious. ~>~
    if (Magical == true) {
        cout << "magic" << endl;
    } else if (Magical == false ) {
        cout << "not magic" << endl;
    } else {
        cout << "not magic" << endl;
    }

}


int main() {
    magic_sqaure();
    return 0;
}