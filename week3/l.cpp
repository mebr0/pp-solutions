#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int m; cin >> m;
    int b[m];

    for (int i = 0; i < m; ++i) cin >> b[i];

    int c[n + m];
    int i = 0, j = 0, k = 0;

    while (k < n + m) {
        // if a done then append b
        if (i == n) {
            c[k++] = b[j++];
            continue;
        }

        // if b done then append a
        if (j == m) {
            c[k++] = a[i++];
            continue;
        }

        // otherwise append current minimum
        if (a[i] > b[j]) {
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
        }
    }

    for (int i = 0; i < n + m; ++i) {
        cout << c[i] << ' ';
    }
}
