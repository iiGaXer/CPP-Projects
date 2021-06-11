#include <bits/stdc++.h>

using namespace std;

int main() {
    //! Main variables.
    int order;
    int total = 0;
    //? Choices for burger
    int burger_choice[5] = {0, 461, 431, 420, 0};
    //? Choices for sides
    int side_choice[5] = {0, 100, 57, 70, 0};
    //? Choices for drinks
    int drink_choice[5] = {0, 130, 160, 118, 0};
    //? Choices for desserts
    int dessert_choice[5] = {0, 167, 266, 75, 0};
    cin >> order;
    //! Makes whatever number I put in order, like 1, that value in that array, like burger_choice[order]-
    //! -, order = 1, burger_choice = 461
    //? Also,it adds the values from line 21, to 27
    total += burger_choice[order];
    cin >> order;
    total += side_choice[order];    
    cin >> order;
    total += drink_choice[order];    
    cin >> order;
    total += dessert_choice[order];
    cout << "Your total Calorie count is " << total << "." << endl;
    
    return 0;
}