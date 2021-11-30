#include<iostream>
#include<algorithm>

using namespace std;

bool is_pal(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }

    return true;
}

struct pal_checker {
    string str;
    
    // iterate throw each permutation and check whether it is pal
    bool check() {
        sort(str.begin(), str.end());

        do {
            if (is_pal(str)) {
                return true;
            }
        } while(next_permutation(str.begin(), str.end()));

        return false;
    }
};

int main() {
    string s; cin >> s;

    pal_checker ch;

    ch.str = s;

    cout << (ch.check() ? "ZA WARUDO TOKI WO TOMARE" : "JOJO") << endl;
}
