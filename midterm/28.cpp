#include<iostream>

using namespace std;

// appends ones to one string and others to another
string ones_forward(string s) {
    string ones = "", other = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            ones += s[i];
        } else {
            other += s[i];
        }
    }

    return ones + other;
}

int main() {
	string s; cin >> s;

    cout << ones_forward(s) << endl;
}
