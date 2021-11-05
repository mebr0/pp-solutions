#include<iostream>

using namespace std;

//  return new string with replaced all chars from t in s with c
string replace(string s, string t, char c) {
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        bool found = false;

        for (int j = 0; j < t.size(); ++j) {
            if (s[i] == t[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            res += c;
        } else {
            res += s[i];
        }
    }

    return res;
}

int main() {
    string s, t; char c; cin >> s >> t >> c;

    cout << replace(s, t, c) << endl;
}
