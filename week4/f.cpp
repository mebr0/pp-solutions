#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            cin >> a[i][j];

    int maxi = a[0][0];
    int x = 0, y = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] > maxi) {
                maxi = a[i][j];
                x = i;
                y = j;
            }
        }
    }

    // calibrate indices
    cout << x + 1 << ' ' << y + 1 << endl;
}
