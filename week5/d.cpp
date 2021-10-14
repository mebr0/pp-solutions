#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    bool pal = true;

    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - 1 - i]) {
            pal = false;
            break;
        }
    }

    cout << (pal ? "YES" : "NO") << endl;
}
