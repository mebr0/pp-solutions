#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    int k, a; cin >> k >> a;

    v.insert(v.begin() + k, a);

    for (auto i: v) {
        cout << i << ' ';
    }

    cout << endl;
}
