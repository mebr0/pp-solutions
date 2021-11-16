#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> occs;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        if (occs[s] == 0) {
            occs[s] = i + 1;
        }
    }

    for (auto occ: occs) {
        cout << occ.first << ' ' << occ.second << endl;
    }
}
