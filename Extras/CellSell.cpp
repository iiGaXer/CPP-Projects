#include <bits/stdc++.h>

using namespace std;

int main() {
    int daytime;
    int evening;
    int weekend;
    cin >> daytime;
    cin >> evening;
    cin >> weekend;
    float plan_a = ((daytime - 100.00) * 0.25) + (evening * 0.15) + (weekend * 0.20);
    float plan_b = ((daytime - 250.00) * 0.45) + (evening * 0.35) + (weekend * 0.25); 
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