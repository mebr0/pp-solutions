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

    // reverse sort, then consider first k elements
    sort(v.rbegin(), v.rend());

    int sum = 0;

    for (auto it = v.begin(); it != v.begin() + k; ++it) {
        sum += *it;
    }

    cout << sum << endl;
}
