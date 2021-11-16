#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> v;
    set<int> s;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
        s.insert(x);
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x = v[i] ^ v[j];

            if (s.find(x) != s.end()) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
