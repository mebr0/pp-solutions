#include<iostream>

using namespace std;

bool bin_search(int a[], int x, int l, int r) {
    if (l == r) {
        return a[l] == x;
    }

    int mid = (l + r) / 2;

    return bin_search(a, x, l, mid) || bin_search(a, x, mid + 1, r);
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int x; cin >> x;

    cout << (bin_search(a, x, 0, n - 1) ? "Yes" : "No") << endl;
}
