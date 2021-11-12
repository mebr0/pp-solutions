#include<iostream>
#include<set>

using namespace std;

int main() {
    string s; cin >> s;
    set<char> chrs;

    for (char c: s) {
        // deal with uppercase chars
        if ('A' <= c && c <= 'Z') {
            c += 32;
        }

        chrs.insert(c);
    }

    cout << chrs.size() << endl;

    for (char c: chrs) {
        cout << c << ' ';
    }

    cout << endl;
}
