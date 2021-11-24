#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main() {
    int n; cin >> n;

    set<int> s;
    vector<int> v;
    
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        if (s.find(x) != s.end()) {
            continue;
        }

        s.insert(x);
        v.push_back(x);
    }

    do {
        for (auto x: v) {
            cout << x << ' ';
        }

        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
}
