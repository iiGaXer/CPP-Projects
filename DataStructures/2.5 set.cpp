#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> set = {10, 20, 30, 40};
    
    set.insert(10);
    set.insert(20);
    set.insert(30);
    set.insert(40);

    cout << set.size() << endl;

    return 0;
}