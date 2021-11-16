#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> eps;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        int k; cin >> k;

        eps[s] += k;
    }

    for (auto ep: eps) {
        cout << ep.first << ' ' << ep.second << endl;
    }
}
