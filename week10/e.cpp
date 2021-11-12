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

    int a, b; cin >> a >> b;

    for (int i = 0; i < b - a + 1; ++i) {
        v.erase(v.begin() + a);
    }

    for (auto i: v) {
        cout << i << ' ';
    }

    cout << endl;
}
