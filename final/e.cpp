#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        int sum = 0;

        for (int j = 0; j < m; ++j) {
            int x; cin >> x;

            if (x > 0) {
                sum++;
            }
        }

        v[i] = sum;
    }

    int maxi = INT_MIN;

    for (auto x: v) {
        maxi = max(maxi, x);
    }

    int ind = -1;
    bool eq = false;
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == maxi) {
            if (ind != -1) {
                eq = true;
                break;
            }

            ind = i;
        }
    }

    if (eq) {
        cout << "Numbers are equal" << endl;
    } else {
        cout << ind + 1 << endl;
    }
}
