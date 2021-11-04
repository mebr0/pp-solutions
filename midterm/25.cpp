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
	string s; cin >> s;

	cout << (is_pal(s) ? "YES" : "NO") << endl;
}
