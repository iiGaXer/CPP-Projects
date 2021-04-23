#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int x = 1; num - x; x >= 1){
    
         for (int y = 1; x - y; y >= 1){
     
             for (int z = 1; y - z; z >= 1){
     
                 cout << num << endl;
                } 
         }   
      }
    
    return 0;
}