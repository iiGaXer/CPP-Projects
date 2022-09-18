#include <bits/stdc++.h>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int number;
    cin >> number;
    int digit_5 = number % 10;
    int digit_4 = number/100;
    digit_4 = digit_4 % 100;


    cout << digit_4;
    // int digit_3 = number%10;
    // int digit_4 = number%1;
    // cout << "First digit" << digit << endl;
    // cout << "Second digit_2" << digit_2 << endl;
    // cout << "Third digit_3" << digit_3 << endl;
    // cout << "Fourth digit_4" << digit_4 << endl;
   return 0;
}