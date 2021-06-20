#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int P, N, R; 
  int dn, count = 0;
  int n_1;
	cin >> P >> N >> R;
	dn = N;
	
	while(N <= P){
		n_1 = N;
		N += dn * R;
		dn = N - n_1;
		count++;
	}

	cout << count << endl;
	
  return 0;
}
