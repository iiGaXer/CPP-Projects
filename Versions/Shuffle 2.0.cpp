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
                playlist.push_back(playlist.front());
                playlist.erase(playlist.begin());
            }
        } else if (button == 2) {
            for(int i=0; i < press_button; i++) {
                playlist.insert(playlist.begin(), playlist.back());
                playlist.erase(playlist.begin()+5);
            }
        } else if (button == 3) {
            for(int i=0; i < press_button; i++) {
                playlist.insert(playlist.begin()+2, playlist.front());
                playlist.erase(playlist.begin());
            }
        }
    } 

    for(auto item : playlist) {
        cout << item << " ";
    }
    

    return 0;
    
}