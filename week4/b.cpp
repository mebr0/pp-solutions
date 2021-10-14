#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            cin >> a[i][j];

    int maxi = a[0][0], maxi2 = a[0][0];
    bool same = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] != a[0][0]) {
                same = false;
            }
            
            if (a[i][j] > maxi) {
                maxi2 = maxi;
                maxi = a[i][j];
                continue;
            }

            if (a[i][j] > maxi2 && a[i][j] != maxi) {
                maxi2 = a[i][j];
            }
        }
    }

    cout << (same ? 0 : maxi2) << endl;
}
