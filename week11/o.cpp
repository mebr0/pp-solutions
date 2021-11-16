#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, string> stud;
    
    for (int i = 0; i < n; ++i) {
        string l, p; cin >> l >> p;

        stud[l] = p;
    }

    int m; cin >> m;

    for (int i = 0; i < m; ++i) {
        string l, p; cin >> l >> p;

        if (stud.find(l) == stud.end()) {
            cout << "login error" << endl;
        } else if (stud[l] != p) {
            cout << "password error" << endl;
        } else {
            cout << "correct password" << endl;
        }
    }
}
