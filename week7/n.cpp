#include<iostream>
#include<algorithm>

using namespace std;

bool is_cheater(int a[], int size, int k, int i) {
    if (i == size - 1) {
        return false;
    }

    return ((a[i] - a[i - 1]) <= k) || is_cheater(a, size, k, i + 1);
}

int main() {
    int n, k; cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    // sort for checking neighbors
    sort(a, a + n);

    cout << (is_cheater(a, n, k, 1) ? "cheater" : "no") << endl;
}
