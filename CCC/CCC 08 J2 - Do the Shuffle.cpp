#include <bits/stdc++.h>

using namespace std;

int main() {
    int button;
    int press_button;
    vector <char> playlist = {'A', 'B', 'C', 'D', 'E'};

    while (button != 4) {
        cin >> button;
        cin >> press_button;
        if (button == 1) {
            for(int i=0; i < press_button; i++) {
                swap(playlist[0], playlist[4]);
                swap(playlist[0], playlist[3]);
                swap(playlist[0], playlist[2]);
                swap(playlist[0], playlist[1]);
            }
        } else if (button == 2) {
            for(int i=0; i < press_button; i++) {
                swap(playlist[0], playlist[4]);
                swap(playlist[1], playlist[4]);
                swap(playlist[2], playlist[4]);
                swap(playlist[3], playlist[4]);
            }
        } else if (button == 3) {
            for(int i=0; i < press_button; i++) {
                swap(playlist[0], playlist[1]);
            }
        }
    } 

    for(int i=0; i < 5; i++) {
        cout << playlist[i] << " ";
    }
    

    return 0;
    
}