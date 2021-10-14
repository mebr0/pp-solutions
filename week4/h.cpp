#include<iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];

    // calculate mini sum as first row
    int mini = 0;
    int row = 0;

    for (int j = 0; j < m; ++j) {
        mini += a[0][j];
    }

    for (int i = 1; i < n; ++i) {
        int sum = 0;

        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }

        if (sum < mini) {
            mini = sum;
            row = i;
        }
    }

    cout << row + 1 << endl;
}
