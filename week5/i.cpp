#include<iostream>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    // counter for all letters
    int cnt[26];

    for (int i = 0; i < 26; ++i) cnt[i] = 0;

    // increment counters for s and decrement for t
    for (int i = 0; i < s.size(); ++i) {
        // s[i] - 'a' transforms char letter to integer index
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); ++i) {
        cnt[t[i] - 'a']--;
    }

    bool equal = true;

    for (int i = 0; i < 26; ++i) {
        if (cnt[i] != 0) {
            equal = false;
            break;
        }
    }

    cout << (equal ? "YES" : "NO") << endl;
}
