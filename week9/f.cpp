#include<iostream>

using namespace std;

int count_even(string s, int i) {
    if (i == s.size()) {
        return 0;
    }

    return ((s[i] - '0') % 2 == 0 ? 1 : 0) + count_even(s, i + 1);
}

int main() {
    string s; cin >> s;

    cout << count_even(s, 0) << endl;
}
