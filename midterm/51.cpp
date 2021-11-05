#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    char last = s[0];
    int cnt = 1, maxi = 1;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i - 1]) {
            if (cnt > maxi) {
                last = s[i - 1];
                maxi = cnt;
            }

            cnt = 1;
        } else {
            cnt++;
        }
    }

    if (cnt > maxi) {
        last = s[s.size() - 1];
        maxi = cnt;
    }

    cout << last << ' ' << maxi << endl;
}
