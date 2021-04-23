#include <bits/stdc++.h>

using namespace std;

//! Function used to do all the coding.
void math() {
    int n;
    cin >> n;
    //? statement for n value.
    if (n == 1 || n > 8) {
        cout << "1" << endl;
    } else if (n > 3 && n < 7) {
        cout << "3" << endl;
    } else {
        cout << "2" << endl;
    }
}

//! Main function!
int main() {
    //* Calls the math function.
    math();
    return 0;
}