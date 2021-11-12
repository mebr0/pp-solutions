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

    int a, b; cin >> a >> b;

    // b inclusive, so b + 1
    reverse(v.begin() + a, v.begin() + b + 1);

    for (auto i: v) {
        cout << i << ' ';
    }

    cout << endl;
}
