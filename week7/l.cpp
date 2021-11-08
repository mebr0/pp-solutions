#include<iostream>

using namespace std;

bool is_pal(string s, int i) {
    if (i == s.size()) {
        return true;
    }

    return s[i] == s[s.size() - 1 - i] && is_pal(s, i + 1);
}

int main() {
    string s; cin >> s;

    cout << (is_pal(s, 0) ? "Yes" : "No") << endl;
}
