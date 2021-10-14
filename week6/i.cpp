#include<iostream>

using namespace std;

// return string with capitalized chars at even positions
string capitalize_evens(string s) {
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if (i % 2 == 0) {
            if ('a' <= s[i] && s[i] <= 'z') {
                res += s[i] - 32;
            } else {
                res += s[i];
            }
        } else {
            res += s[i];
        }
    }

    return res;
}

int main() {
    string s; cin >> s;

    cout << capitalize_evens(s) << endl;
}
