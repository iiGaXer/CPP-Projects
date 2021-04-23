#include <bits/stdc++.h>

using namespace std;

//* Executer-function.
void executer() {
    //* My string variable.
    string str = "defcba";
    cout << "\nNow, with no sorting." << endl;
    cout << str << endl;

    //! Sorts out the letters, by alphabetical order.
    sort(str.begin(), str.end());
    cout << "Now, with sorting." << endl;
    cout << str << endl;

}

//* Executes all the coding in "executer" function.
int main() {
    //* My executer-function!
    executer();
    return 0;
}