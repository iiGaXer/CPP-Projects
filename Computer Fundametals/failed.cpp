#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    int x;
    int y;
    cin >> w;
    cin >> x;
    cin >> y;
    if (w > x > y || w > y > x) {
        if (int w_x = (w + x) && int w_y = (w + y)) {
            if (w_x - w_y || w_y - w_x) {
                if (w_x > w_y) {
                    cout << x << endl;
                } else if (w_y > w_x) {
                    cout << y << endl;
                }
        }
    } 
    cin.ignore;
    cin >> x, w, y; 
      else if (x > w > y || x > y > w) {
        if (int x_w = (x + w) && int x_y = (x + y)) {
            if (x_w - x_y || x_y - x_w) {
                if (x_w > x_y) {
                    cout << w << endl;
                }
                else if (x_y > x_w) {
                    cout << y << endl;
                }
        }
    }
    cin.ignore;
    cin >> y, w, x;
      else if (y > w > x || y > x > w) {
        if (int y_w = (y + w) && int y_x = (y + x)) {
            if (y_w - y_x || y_x - y_w) {
                if (y_w > y_x) {
                    cout << w << endl;
                } else if (y_x > y_w) {
                    cout << x << endl;
                }
        }
    }


    return 0;
}