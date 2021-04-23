#include <bits/stdc++.h>

using namespace std;

int main() {    
    int array[2][2] = {
        {1, 2},
        {3, 4}
    };

    string input;
    cin >> input;

    for(int i=0; i < int(input.size()); i++) {
        if (input[i] == 'H' ) {
            swap(array[0][0], array[1][0]);
            swap(array[0][1], array[1][1]);
        }
        if (input[i] == 'V') {
            swap(array[0][0], array[0][1]);
            swap(array[1][0], array[1][1]);
        }
    }

    for(int i=0; i < 2; i++) {
        for(int j=0; j < 2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}