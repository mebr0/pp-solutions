#include<iostream>

using namespace std;

// return whether string consists of even digits only
bool only_even(string s) {
    bool even = true;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8') {
            even = false;
        }
    }

    return even;
}

int main() {
    string s; cin >> s;

    cout << (only_even(s) ? "Valid" : "Not valid") << endl;
}
