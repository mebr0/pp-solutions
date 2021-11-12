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

    // sort, then consider first k elements
    sort(v.begin(), v.end());

    for (auto it = v.begin(); it != v.begin() + k; ++it) {
        cout << *it << ' ';
    }

    cout << endl;
}
