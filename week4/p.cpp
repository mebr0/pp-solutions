#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            cin >> a[i][j];

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        // a[i][n - 1 - i] - element of 2nd diagonal
        sum += a[i][n - 1 - i];
    }

    cout << sum << endl;
}
