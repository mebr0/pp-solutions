#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s, t; cin >> s >> t;

    if (s.size() != t.size()) {
        cout << "Not anagram" << endl;
    } else {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        cout << (s == t ? "Anagram" : "Not anagram") << endl;
    }
}
