#include<iostream>

using namespace std;

// return uppered char (if it is)
char upper(char c) {
    if ('a' <= c && c <= 'z') {
        return c - 32;
    }

    return c;
}

int main() {
    char c; cin >> c;

    cout << upper(c) << endl;
}
