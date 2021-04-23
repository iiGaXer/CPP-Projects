#include <bits/stdc++.h>
 
using namespace std;

//? The operations function: adding
int vscode(int a, int b) {
    int result = a + b;
    return result;
}

//? The operations function: minus
int operations(int x, int y) {
    int end_result = x - y
    return end_result;
}

//? The operations function: multiply
int multiply(int l, int u) {
    int mulitply_result = l*u;
    return mulitply_result;
}

int divide( int o, int z) {
    int divide_result = o/z;
    return divide_result;
}

int main(){
    //! adding function
    int a = 3, b = 4;
    int result;
    result = vscode(a, b);
    cout << "result is" << result << endl;
    
    //! subtracting function
    int x = 3, int y = 4;
    int end_result;
    end_result = operations(x, y);
    cout << "result is" << end_result << endl; 
    
    //! multiply function
    int l = 3, int u = 4;
    int mulitply_result;
    mulitply_result = multiply(l, u);
    cout << "result is" << mulitply_result << endl;

    //! divide function
    int o = 3, int z = 4;
    int divide_result;
    divide_result = divide(o, z);
    cout << "result is " << divide_result << endl;


    return 0; 
}