#include<iostream>

using namespace std;

void print_letter(string s) {
    for (int i = 0; i < s.size() + 2; ++i) {
        cout << '+';
    }

    cout << endl;

    cout << '+' << s << '+' << endl;

    for (int i = 0; i < s.size() + 2; ++i) {
        cout << '+';
    }

    cout << endl;
}

int main() {
    string s; cin >> s;

    print_letter(s);
}
