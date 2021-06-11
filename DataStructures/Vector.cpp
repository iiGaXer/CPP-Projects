#include <bits/stdc++.h>

using namespace std;

void vectors() {
    vector <int> vect_or = {6, 7, 8, 9, 10};
    cout << vect_or[0] << endl;

    sort(vect_or.begin(), vect_or.end());
    for(int i=0; i < vect_or.size(); i++) {
        cout << vect_or[i] << " ";
    } 

    cout << endl;

    sort(vect_or.begin(), vect_or.end(), greater<>());
    for(int i=0; i < vect_or.size(); i++) {
        cout << vect_or[i] << " ";
    }

    cout << endl;

    sort(vect_or.begin(), vect_or.begin() + 5);
    for(int i=0; i < vect_or.size(); i++) {
        cout << vect_or[i] << " ";
    }

    cout << endl;

    for(int i=0; i < vect_or.size(); i++) {
        cout << vect_or[i] << " ";
    }

    cout << endl;

    //! Same as the for loop before, just better!
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    //? Pushes back "0" to the end
    vect_or.push_back(0);
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    //? Pushes the number "10" to the 2nd element
    vect_or.insert(vect_or.begin()+1, 10);
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    //? Remove the last element
    vect_or.pop_back();
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    //? Erases whatever is in the "erase.();" bracket.
    vect_or.erase(vect_or.begin());
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    //? Erases 2nd element to 3rd element.
    vect_or.erase(vect_or.begin()+1, vect_or.begin()+3);
    for(auto item : vect_or) {
        cout << item << " ";
    }

    cout << endl;

    cout << vect_or.front() << endl;
}

void vector_2d_arrays() {
    vector <vector <int>> array_2d {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i=0; i < array_2d.size(); i++) {
        for(int j=0; j < array_2d.size(); j++) {
            cout << array_2d[i][j] << " ";
        }
        cout << endl;
    }

}

void vector_2d_arrays_challenge() {
    vector <vector <int>> array_2d {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector <int> array = {10, 11, 12, 13}; 
    array_2d.push_back(array);

    for(int i=0; i < array_2d.size(); i++) {
        for(int j=0; j < array_2d[i].size(); j++) { 
            cout << array_2d[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {
    vector_2d_arrays_challenge();
    return 0;
}