#include<iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

    if (n == 0 || m == 0) {
        cout << "error" << endl;
        return 0;
    }

    string names[n];
    int sums[n] = {0};

    for (int i = 0; i < n; ++i) {
        cin >> names[i];

        for (int j = 0; j < m; ++j) {
            int a; cin >> a;
            sums[i] += a;
        }
    }

    int maxi = 0, maxi_i = 0;

    for (int i = 0; i < n; ++i) {
        if (sums[i] > maxi) {
            maxi = sums[i];
            maxi_i = i;
        }

        cout << names[i] << " - " << sums[i] << endl;
    }

    cout << "The best:" << endl;
    cout << names[maxi_i] << ' ' << maxi << endl;
}
