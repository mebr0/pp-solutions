#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if ('a' <= s[i] && s[i] <= 'z') {
            // ASCII shift
            s[i] -= 32;
        }
    }

    cout << s << endl;
}
