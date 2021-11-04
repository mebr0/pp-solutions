#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int k; cin >> k;

    // make initial diff maximum
    int res, diff = 1e9+7;

    for (int i = 0; i < n; ++i) {
        if (abs(a[i] - k) < diff) {
            res = i;
            diff = abs(a[i] - k);
        }
    }

    cout << res << endl;
}
