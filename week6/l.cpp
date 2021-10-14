#include<iostream>

using namespace std;

// return whether string contains n (or more) consequent digits
bool conseq_digits(string s, int n) {
    bool contains = false;
    int length = 0;

    for (int i = 0; i < s.size(); ++i) {
        if ('0' <= s[i] && s[i] <= '9') {
            length++;
        } else {
            length = 0;
        }

        if (length == n) {
            contains = true;
            break;
        }
    }

    return contains;
}

int main() {
    string s; cin >> s;
    int n; cin >> n;

    cout << (conseq_digits(s, n) ? "Valid" : "Not valid") << endl;
}
