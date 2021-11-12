#include<iostream>

using namespace std;

int maxi(string s, int i) {
    if (i == s.size()) {
        return 0;
    }

    return max((s[i] - '0'), maxi(s, i + 1));
}

int main() {
    string s; cin >> s;

    cout << maxi(s, 0) << endl;
}
