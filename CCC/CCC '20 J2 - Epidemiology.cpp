#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int P;
    int N;
    int R;
    int final_day;
    cin >> P >> N >> R;
    while (P <= 10000000 && N <= P && R <= 10) {
      for (int final_day = P/N*R;) {
        cout << final_day << endl;
      }
    }


  return 0;
}
