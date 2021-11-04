#include<iostream>

using namespace std;

// check whether string is palindrome
bool is_pal(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n; cin >> n;

    bool found = false;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        if (is_pal(s)) {
            found = true;
            cout << s << endl;
        }
    }

    if (!found) {
        cout << "NO" << endl;
    }
}
