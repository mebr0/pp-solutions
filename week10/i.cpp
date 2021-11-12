#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    int k; cin >> k;

    // find return v.end() if not found
    auto it = find(v.begin(), v.end(), k);

    cout << (it != v.end() ? "Yes" : "No") << endl;
}
