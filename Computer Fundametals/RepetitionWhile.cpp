#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x = 0;
    while (x < 10) {
        cout << "x is small than 10" << endl;
        cout << x << endl;

        x++;
    }
    // bool condition = true;
    // while (condition) {
       // cout << "Within while loop!" << endl;

      //  condition = false
    
    // }
    char input; 
    while (cin >> input) {
        cout << "Within while loop!" << endl;
        cout << "Your input is " << endl;

        if (input = 'quit')
           break;
    
    }
    return 0;
}