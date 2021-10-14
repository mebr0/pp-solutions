#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;
    // counter for all 10 digits
    int cnt[10];

    for (int i = 0; i < 10; ++i) cnt[i] = 0;

    for (int i = 0; i < s.size(); ++i) {
        // s[i] - '0' transforms char integer to integer
        cnt[s[i] - '0']++;
    }

    bool equal = true;
    int eq_cnt = -1;

    for (int i = 0; i < 10; ++i) {
        // ignore zero counters
        if (cnt[i] != 0) {
            // if eq_cnt not init then init it
            // otherwire compare with it
            if (eq_cnt == -1) {
                eq_cnt = cnt[i];
            } else {
                if (eq_cnt != cnt[i]) {
                    equal = false;
                    break;
                }
            }
        }
    }

    cout << (equal ? "YES" : "NO") << endl;
}
