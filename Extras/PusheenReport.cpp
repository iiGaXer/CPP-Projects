#include <bits/stdc++.h>

using namespace std;

//! PROBLEM: It give me 14/15 points- 
//! -when really giving me a check and x.

int main() {
    //* The first variable: If greater
    //* -than 2nd, "CS452"
    int A;
    //* The 2nd variable: If greater-
    //* -than 1st, "PHIL145"
    int B;
    cin >> A;
    cin >> B;
    if (0 <= A && A <= 100 and A == B) {
        if (A > B) {
            cout << "CS452" << endl;
        } else if (B > A) {
            cout << "PHIL145" << endl;
        } else if (B == A) {
            //! I need ^ that code to do something that doesn't just
            //? -output nothing
        }
    }



    return 0;
}