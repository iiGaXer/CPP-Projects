#include <bits/stdc++.h>

using namespace std;

int main() {    
    string text;
    string strings;
    

    cin >> text >> strings;
    string string_2 = strings;
    bool contains_cyclic_shifts;

    for(int i=0; i < string_2.size(); i++) {        
        if (text.find(string_2) != string::npos) {
            contains_cyclic_shifts = true;
            break;
        } else {
            contains_cyclic_shifts = false;        
            string_2.push_back(string_2.front());
            string_2.erase(string_2.begin());
        }


    }

    if (contains_cyclic_shifts == true) {
        cout << "yes" << endl;
    } else if (contains_cyclic_shifts == false) {
        cout << "no" << endl;
    } else {
        cout << "no" << endl;
    }


    return 0;
}