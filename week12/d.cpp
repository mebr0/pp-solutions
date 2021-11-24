#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool hard_sort(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;

    for_each(a.begin(), a.end(), [&] (int n) {
        sum_a += n;
    });

    for_each(b.begin(), b.end(), [&] (int n) {
        sum_b += n;
    });

    // compare by sums
    if (sum_a != sum_b) {
        return sum_a < sum_b;
    }

    // compare by sizes
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    bool eq = true;

    // compare by elements
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            eq = a[i] < b[i];
            break;
        }
    }

    return eq;
}

int main() {
    int n; cin >> n;

    vector<vector<int>> mat;

    for (int i = 0; i < n; ++i) {
        int m; cin >> m;

        vector<int> row;

        for (int j = 0; j < m; ++j) {
            int x; cin >> x;

            row.push_back(x);
        }

        mat.push_back(row);
    }

    sort(mat.begin(), mat.end(), hard_sort);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < mat[i].size(); ++j) {
            cout << mat[i][j] << ' ';
        }

        cout << endl;
    }
}
