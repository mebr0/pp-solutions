#include<iostream>

using namespace std;

// return whether sum of digits divisible by last digit
bool lucky(string s) {
    int sum = 0;

    for (int i = 0; i < s.size(); ++i) {
        sum += s[i] - '0';
    }

    return sum % (s[s.size() - 1] - '0') == 0;
}

int main() {
    string s; cin >> s;

    cout << (lucky(s) ? "Yes" : "No") << endl;
}
