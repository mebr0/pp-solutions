#include<iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];

    int sum = 0;

    cout << "coordinates of min elements:" << endl;

    for (int j = 0; j < m; ++j) {
        int mini = a[0][j];
        int x = 0, y = j;

        for (int i = 1; i < n; ++i) {
            if (a[i][j] < mini) {
                mini = a[i][j];
                x = i;
                y = j;
            }
        }

        sum += mini;

        cout << x + 1 << ';' << y + 1 << endl;
    }

    cout << "Their sum:" << endl;
    cout << sum << endl;
}
