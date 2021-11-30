#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

struct matrix {
    vector<vector<int>> m;

    void add_row(vector<int> row) {
        m.push_back(row);
    }

    bool cool() {
        for (int i = 0; i < m.size() - 1; ++i) {
            for (int j = 0; j < m[i].size() - 1; ++j) {
                if (m[i][j] == m[i + 1][j] && m[i + 1][j] == m[i + 1][j + 1] && m[i + 1][j + 1] == m[i][j + 1]) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    int n, m; cin >> n >> m;

    matrix mat;

    for (int i = 0; i < n; ++i) {
        vector<int> row;

        for (int j = 0; j < m; ++j) {
            int x; cin >> x;

            row.push_back(x);
        }

        mat.add_row(row);
    }

    cout << (mat.cool() ? "YES" : "NO") << endl;
}
