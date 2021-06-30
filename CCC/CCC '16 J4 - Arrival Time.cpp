#include <bits/stdc++.h>

using namespace std;

int main() {
    int hours, mins;
    char comma;

    cin >> hours >> comma >> mins;

    int time = hours*60+mins;

    for(int i=240; i>0; time++) {
        if (time>=7*60 && time<10*60)  {
            i--;
        } else if (time>=15*60 && time<19*60) {
            i--;
        } else {
            i-=2;
        }

    }
    
    cout << setfill('0') << setw(2) << time/60%24 << ":" << setfill('0') << setw(2) << time%60 << endl;


    return 0;
}
