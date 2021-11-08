#include<iostream>

using namespace std;

int sum_digits(string s, int i) {
    if (i == s.size()) {
        return 0;
    }

    return sum_digits(s, i + 1) + (s[i] - '0');
}

int main() {
    string s; cin >> s;

    cout << sum_digits(s, 0) << endl;
}
