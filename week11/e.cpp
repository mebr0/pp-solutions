#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> m;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        m[s]++;
    }

    int cnt = 0;

    for (auto s: m) {
        if (s.second == 3) {
            cnt++;
        }
    }

    cout << cnt << endl;
}
