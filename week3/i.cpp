#include<iostream>

using namespace std;

int main() {
    int n, l, r; cin >> n >> l >> r;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int sum = 0;

    // swap from l-1 to r-1
    for (int i = 0; i < (r - l + 1) / 2; ++i) {
        swap(a[l - 1 + i], a[r - 1 - i]);
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
}
