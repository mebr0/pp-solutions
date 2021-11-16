#include<iostream>
#include<stack>

using namespace std;

int main() {
    string s; cin >> s;
    stack<char> br;

    bool ok = true;

    for (int i = 0; i < s.size(); ++i) {
        // if open bracket push anyway
        if (s[i] == '(') {
            br.push(s[i]);
            continue;
        }

        // if for closed bracket no matching, sequence is not valid
        if (br.empty()) {
            ok = false;
            break;
        }

        if (br.top() != '(') {
            ok = false;
            break;
        }

        br.pop();
    }

    // by the end, stack must be empty
    cout << (ok && br.size() == 0 ? "YES" : "NO") << endl;
}
