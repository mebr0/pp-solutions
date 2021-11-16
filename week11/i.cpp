#include<iostream>
#include<set>

using namespace std;

int main() {
    int n; cin >> n;
    set<string> logins;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        cout << (logins.find(s) != logins.end() ? "user already exists" : "new user added") << endl;

        logins.insert(s);
    }
}
