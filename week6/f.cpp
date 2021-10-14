#include<iostream>

using namespace std;

// return count of digits in string
int count_digits(string s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if ('0' <= s[i] && s[i] <= '9') {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    string s; cin >> s;
    int n; cin >> n;

    cout << (count_digits(s) >= n ? "YES" : "NO") << endl;
}
