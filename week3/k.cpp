#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    // already count first element
    int cnt = 1;

    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            cnt++;
        }
    }

    // no duplicate array with first element
    int b[cnt];
    b[0] = a[0];

    for (int i = 1, j = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            b[j++] = a[i];
        }
    }

    for (int i = 0; i < cnt; ++i) {
        cout << b[i] << ' ';
    }
}
