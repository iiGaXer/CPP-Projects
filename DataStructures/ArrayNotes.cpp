#include <bits/stdc++.h>

using namespace std;

//! Array notes:

void array_1() {
    //? An array
    int x[3];
    // x[0] is value 0
    x[0] = 0;
    // x[1] is value 1
    x[1] = 1;
    // x[2] is value 2
    x[2] = 2;
    cin >> x[0];

    //! Calls out each value in the Array 
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;

}    

void array_2() {
    //? ^ The coding function
    string x[3]; 
    x[0] = "You are";
    x[1] = "filled"; 
    x[2] = "with determination";
    //? prints out this value: x[0]
    cout << x[0]<< endl;
    //? prints out this value: x[1]
    cout << x[1] << endl;
    //? prints out this value: x[2]
    cout << x[2] << endl;
}

void array_3() {
    //! Array
    int x[2];
    //? All inputed-values of array value.
    cin >> x[0];
    cin >> x[1];
    //* Sorts the numbers in biggest to smallest
    sort(x, x + 2, greater<>());
    cout << x[1] << endl;
    //* Sorts the numbers in smallest to biggest
    sort(x, x + 2);
    cout << x[1] << endl;
}

void array_change_zero() {
    int shift[3] = {};
    //? ^ makes all values 0
    int number;
    cout << shift[number] << endl;

}

void array_size() {
    //* Assign values to array.
    int x[3] = {};
    cin >> x[0];
    x[1] = 0;
    //? See/access array element
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    //* Says the size, or bytes or bits, of the integer & of our array-variable!
    cout << "size of int: " << sizeof(int) << "size of array-variable: " << sizeof(x) << endl;
    cout << "array size or length: " << sizeof(x)/sizeof(x[0]) << endl;
}

void Two_Dimmensional_array() {
    int Dimmension[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    //! Nasty/Nested for loop for cout:
    //* That "cout << endl" means like pressing enter.
    for(int i=0; i < 3; i++) {
        for(int a=0; a < 3; a++) {
            cout << " " << Dimmension[i][a];
        }
        cout << endl;
    }
}   

void Two_D_array_rotation() {
    int Dimmension[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    //! Nasty/Nested for loop for cout:
    //* That "cout << endl" means like pressing enter.
    //! To rotate the numbers, switch the column and rows: column = j and row = i 
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cout << " " << Dimmension[j][i];
        }
        cout << endl;
    }
} 

int main() {
    //! Use the code below the initilize the functions ^ for testing
    Two_D_array_rotation();
    //? Use the code above the initilize the functions ^ for testing
    return 0;
}