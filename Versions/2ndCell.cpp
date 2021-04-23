#include <bits/stdc++.h>

using namespace std;

int main() {
    int daytime;
    int evening;
    int weekend;
    cin >> daytime;
    cin >> evening;
    cin >> weekend;
    double float plan_a; // ((daytime - 100.00) * 0.25) + (evening * 0.15) + (weekend * 0.20)
    double float plan_b; // ((daytime - 250.00) * 0.45) + (evening * 0.35) + (weekend * 0.25) 
    if (daytime >= 100) {
        plan_a == ((daytime - 100.00) * 0.25) + (evening * 0.15) + (weekend * 0.20);
        plan_b == plan_a;
    } else if (daytime < 100) {
        plan_a == 0;
        plan_b == 0;
    }
    cout << "Plan A costs "  << plan_a << endl;
    cout << "Plan B costs "  << plan_b << endl;
    if (plan_a > plan_b) {
        cout << "Plan B is cheapest." << endl;
    } else if (plan_b > plan_a) { 
        cout << "Plan A is cheapest." << endl;
    } else if (plan_a == plan_b) {
        cout << "Plan A and B are the same price." << endl;
    }

    return 0;
}