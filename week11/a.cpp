#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> crds;

    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;

        pair<int, int> coords = make_pair(x, y);

        crds.push_back(coords);
    }

    sort(crds.begin(), crds.end());

    for (auto c: crds) {
        cout << c.first << ' ' << c.second << endl;
    }
}
