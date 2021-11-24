#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

    vector<int> a, b;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        a.push_back(x);
    }

    for (int i = 0; i < m; ++i) {
        int x; cin >> x;

        b.push_back(x);
    }

    // remote dublicates and save new ends
    auto a_end = unique(a.begin(), a.end());
    auto b_end = unique(b.begin(), b.end());

    auto a_begin = a.begin(), b_begin = b.begin();

    // merge both to v
    vector<int> v;

    while (a_begin != a_end && b_begin != b_end) {
        v.push_back(*a_begin++);
        v.push_back(*b_begin++);
    }

    while (a_begin != a_end) {
        v.push_back(*a_begin++);
    }

    while (b_begin != b_end) {
        v.push_back(*b_begin++);
    }

    auto v_end = unique(v.begin(), v.end());

    for_each(v.begin(), v_end, [] (int x) {
        cout << x << ' ';
    });

    cout << endl;
}
