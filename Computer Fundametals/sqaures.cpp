#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tiles;
    int side_lengths;
    cin >> tiles;
    side_lengths = sqrt(tiles);
    cout << "The largest square has side length " << side_lengths << "." << endl;
    return 0;
}
