#include <bits/stdc++.h>

using namespace std;

//! All the main coding
void executer() {
    //* All the variables
    float weight;
    float height;
    //* All variables with input
    cin >> weight;
    cin >> height;
    //* The variable with an equation
    float BMI = weight/(height * height);
    //* Our condition and output with that condition happening
    if (BMI < 18.5) {
        cout << "Underweight" << endl;
    } else if (BMI >= 18.5 && BMI <= 25.0) {
        cout << "Normal weight" << endl;
    } else if (BMI > 25) {
        cout << "Overweight" << endl;
    }

}

//! Main function
int main() {
    //? Runs all the code in executer
    executer();
    return 0;
}