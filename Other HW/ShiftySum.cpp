#include <bits/stdc++.h>

using namespace std;

int main() {
    //? This variable is N.
    int number;
    cin >> number;
    //? This "Sum" is the N added up variable.
    int sum = number;
    //? The number of times the number will add
    int number_times_input;
    cin >> number_times_input;
    for(int i = 0; i < number_times_input; i++;) {
        if(number_times_input == 0) {
            sum == number;
        }
        sum += number*10;
    } 
    cout << sum << endl;

    return 0;
}
