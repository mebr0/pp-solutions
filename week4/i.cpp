#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // check for perfect square with flooring square root and squaring again
            int sr = sqrt(a[i][j]);

            if (a[i][j] == sr * sr) {
                a[i][j] = sr;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
}
