#include<iostream>

using namespace std;

int N = 26;

// check whether string is palindrome permutation
bool is_pal_perm(string s) {
    int cnt[N] = {0};

    for (int i = 0; i < s.size(); ++i) {
        cnt[s[i] - 'a']++;
    }

    bool one_odd = false;

    for (int i = 0; i < N; ++i) {
        if (cnt[i] % 2 == 1) {
            if (!one_odd) {
                one_odd = true;
            } else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string s; cin >> s;

    cout << (is_pal_perm(s) ? "Luffy is the pirate king!" : "Onepiece") << endl;
}
