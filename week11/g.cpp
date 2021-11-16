#include<iostream>
#include<stack>

using namespace std;

int main() {
    string s; cin >> s;
    stack<char> br;

    for (int i = 0; i < s.size(); ++i) {
        // delete recent 1, only if current is 1 and recent is 1
        if (s[i] == '1' && !br.empty() && br.top() == '1') {
            br.pop();
            continue;
        }

        br.push(s[i]);
    }

    // fill result from stack
    string res;

    while (!br.empty()) {
        res = br.top() + res;
        br.pop();
    }

    cout << res << endl;
}
