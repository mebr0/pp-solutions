#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; cin >> s;
    int l, r; cin >> l >> r;

    // len of substring will be r-l+1
    cout << s.substr(l, r - l + 1) << endl;
}
