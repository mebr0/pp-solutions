#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool is_pal(vector<int> v) {
    for (int i = 0; i < v.size() / 2; ++i) {
        if (v[i] != v[v.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    // use simple sort and next permutation to find minimal one
    sort(v.begin(), v.end());

    bool found = false;

    while (next_permutation(v.begin(), v.end())) {
        if (is_pal(v)) {
            found = true;

            for (auto x: v) {
                cout << x << ' ';
            }

            cout << endl;

            break;
        }
    }

    if (!found) {
        cout << "Impossible" << endl;
    }
}
