#include <bits/stdc++.h>
 
using namespace std;

int main() {
    //? Array
    int x[3];
    //* All inputed-values of array value.
    cin >> x[0];
    cin >> x[1];
    cin >> x[2];
    //! Sorts the numbers in smallest to biggest.
    sort(x, x + 3);
    cout << x[1] << endl;

    return 0;
}