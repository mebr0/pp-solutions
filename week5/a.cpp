#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    int cCnt = 0, sCnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            cCnt++;
        }

        if ('a' <= s[i] && s[i] <= 'z') {
            sCnt++;
        }
    }

    cout << sCnt << ' ' << cCnt << endl;
}
