#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int maxi = a[0];
    int maxi_ind = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > maxi) {
            maxi = a[i];
            maxi_ind = i;
        }
    }

    // calibrate index
    cout << maxi_ind + 1 << endl;
}
