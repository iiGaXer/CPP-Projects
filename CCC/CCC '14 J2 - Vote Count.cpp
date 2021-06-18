#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers_of_A = 0;
    int numbers_of_B = 0;

    int V;
    string votes;
    cin >> V >> votes;

    for(int i=0; i < V; i++) {
        if (votes[i] == 'A') {
            numbers_of_A += 1;
        }
        if (votes[i] == 'B') {
            numbers_of_B += 1;
        }
    }

    if (numbers_of_A == numbers_of_B) {
        cout << "Tie" << endl;
    } else if (numbers_of_A > numbers_of_B) {
        cout << "A" << endl;
    } else if (numbers_of_A < numbers_of_B) {
        cout << "B" << endl;
    }

    


    return 0;
}