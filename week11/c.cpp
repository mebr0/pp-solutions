#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        m[x]++;
    }

    int cnt = 0;

    for (auto x: m) {
        if (x.second >= 2) {
            cnt++;
        }
    }

    cout << cnt << endl;
}
