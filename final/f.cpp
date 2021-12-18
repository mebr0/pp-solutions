#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<vector<int>> v(n,vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }

    bool eq = true;

    for (int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if (v[i][j] != v[j][i]) {
                eq = false;
                break;
            }
        }
    }

    cout << (eq ? "YES" : "NO") << endl;
}
