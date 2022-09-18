#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;


void Print() {
    printf("Hello, World!");
}

void input_and_Output() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
}

void Data_types() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    
    printf("%d", a);
    cout << endl;
    printf("%ld", b);
    cout << endl;
    printf("%c", c);
    cout << endl;
    printf("%f", d);
    cout << endl;
    printf("%lf", e);
}

void if_else() {
        int n = 0;
    
    cin >> n;
    
    if (n <= 9 && n >= 1) {
        if (n == 1) {
            cout << "one" << endl;
        } else if (n == 2) {
            cout << "two" << endl;
        } else if (n == 3) {
            cout << "three" << endl;
        } else if (n == 4) {
            cout << "four" << endl;
        } else if (n == 5) {
            cout << "five" << endl;
        } else if (n == 6) {
            cout << "six" << endl;
        } else if (n == 7) {
            cout << "seven" << endl;
        } else if (n == 8) {
            cout << "eight" << endl;
        } else if (n == 9) {
            cout << "nine" << endl;
        }
    } else if (n > 9) {
        cout << "Greater than 9" << endl;
    }
}

void for_loop() { 
    int x, y;
    
    cin >> x;
    cin >> y;
    
    for(int i = x; i < y + 1; i++) {
        if (i <= 9 && i >= 1) {
            if (i == 1) {
                cout << "one" << endl;
            } else if (i == 2) {
                cout << "two" << endl;
            } else if (i == 3) {
                cout << "three" << endl;
            } else if (i == 4) {
                cout << "four" << endl;
            } else if (i == 5) {
                cout << "five" << endl;
            } else if (i == 6) {
                cout << "six" << endl;
            } else if (i == 7) {
                cout << "seven" << endl;
            } else if (i == 8) {
                cout << "eight" << endl;
            } else if (i == 9) {
                cout << "nine" << endl;
            }
        } else if (i > 9 && i % 2 == 0) {
            cout << "even" << endl;
        } else if (i > 9 && i % 2 != 0) {
            cout << "odd" << endl;
        }
    
    }
}

void Function() {
    int max_of_four(int w, int x, int y, int z) {
        int array[4] = {w, x, y, z};
        sort(array, array + 4);

        return array[3];
    }

    int main() {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ans = max_of_four(a, b, c, d);
        printf("%d", ans);
        
        return 0;
    }
}

void Pointer() {
    void update(int *a,int *b) {
        int value = *a;

        *a += *b;
        *b -= value;
        
        if (*b <= -1) {
            *b *= -1;
        } else if (*b >= 0) {
            ;
        } else {
            ;
        }
    }

    int main() {
        int a, b;
        int *pa = &a, *pb = &b;
        
        scanf("%d %d", &a, &b);
        update(pa, pb);
        printf("%d\n%d", a, b);

        return 0;
    }
}

void arrays() {
    int main() {
        int n;
        cin >> n;
        int numbers[n];
        
        for(int i = 0; i < n + 1; i++) {
            cin >> numbers[i];
        }
        
        // Use this for checking the index values of said array.
        // for(int i = 0; i < sizeof(n); i++) {
        //     cout << numbers[i] << endl;
        // }
        
        // Use this to print stuff on the same line
        // for(int i = 0; i < sizeof(n); i++) {
        //     cout << numbers[i] << " ";
        // }
        
        for(int i = 0; i < n/2; i++) {
            reverse(numbers + i, numbers + n);
        }

    
        return 0;
    }
}

int main() {
    return 0;
}