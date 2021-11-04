#include<iostream>

using namespace std;

// return string without numberic chars
string remove_numbers(string s) {
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if ('0' > s[i] || s[i] > '9') {
            res += s[i];
        }
    }

    return res;
}

int main() {
    string s;

    while (cin >> s) {
        cout << remove_numbers(s) << endl;
    }
}
