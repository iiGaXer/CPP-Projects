#include <bits/stdc++.h>
 
using namespace std;

int main() {
    char character_array[4] = {'Y', 'e', 's', '\n'};
    char array_2[3] = {'N', 'o', '\n'};

    for(int i=0; i < 4; i++) {
        cout << character_array[i];
    }

    for(int i=0; i < 3; i++) {
        cout << array_2[i];
    }
    cout << endl;

    string Salutations = "Hello World!\nHello World!\n";

    cout << Salutations << endl;


    return 0;
}