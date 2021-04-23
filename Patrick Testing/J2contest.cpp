#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A = N + 2;
    int replicate = N * 1 - 1;
    int number;
    int array[N];
    string names[N];
    string name;
    string highest_bid_name, input_name;
    int number_bid, highest_bid = 0, input_bid;


    cin >> number_bid;
    for (int i = 0; i < number_bid; i++) {
        cin >> input_name >> input_bid;
        highest_bid = input_bid;
        highest_bid_name = input_name;

    }


    cout << names[replicate] << endl;
    return 0;
}