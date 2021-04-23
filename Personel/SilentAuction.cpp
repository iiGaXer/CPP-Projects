#include <bits/stdc++.h>

using namespace std;

int main() {
    //! This variable determines how many rounds you
    //! - play.
    int N;
    cin >> N;
    string bidders[N] = {};
    int bidder_input[N] = {};
    int highest_bid;
    string highest_bidder;
    //? All the bidders name.
    string total_bidders[N] = {};
    for(int i=0; i < N; i++) {
        cin >> bidders[i];
        total_bidders[i] = bidders[i];
        cin >> bidder_input[i];
        if (i == N - 1) {
            sort(total_bidders, total_bidders + N);
            sort(bidder_input, bidder_input + N);
            highest_bidder = total_bidders[i];
            highest_bid = bidder_input[i];
        } 
    }
    cout << highest_bidder << endl;

    return 0;
}