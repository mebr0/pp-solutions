#include<iostream>
#include<map>

using namespace std;

int main() {
    string s; cin >> s;

    map<char, int> m;

    for (auto ch: s) {
        m[ch]++;
    }

    for (auto x: m) {
        cout << x.first << " " << x.second << endl;
    }
}
