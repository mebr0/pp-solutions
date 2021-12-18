#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

    char arr[n][m];
    vector<vector<bool>> used(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    // start travel from 0, 0
    stack<pair<int, int>> s;

    s.push(make_pair(0, 0));

    while (!s.empty()) {
        int i = s.top().first, j = s.top().second;

        s.pop();

        if (i < 0 || i >= n || j < 0 || j >= m) {
            continue;
        }

        if (arr[i][j] == '#' || used[i][j]) {
            continue;
        }

        used[i][j] = true;

        // go to adjacent cells
        s.push(make_pair(i + 1, j));
        s.push(make_pair(i - 1, j));
        s.push(make_pair(i, j + 1));
        s.push(make_pair(i, j - 1));
    }

    cout << (used[n - 1][m - 1] ? "YES" : "NO") << endl;
}
