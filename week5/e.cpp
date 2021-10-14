#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    int even = 0, odd = 0;

    for (int i = 0; i < s.size(); ++i) {
        // s[i] - '0' transforms char integer to integer
        if (i % 2 == 0) {
            even += s[i] - '0';
        } else {
            odd += s[i] - '0';
        }
    }

    cout << (even == odd ? "YES" : "NO") << endl;
}
