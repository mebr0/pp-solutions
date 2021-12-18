#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;

    int num = 0;
    string tkns[4];
    string tmp = "";

    // parse tokens
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '.') {
            tmp += s[i];
            continue;
        }

        tkns[num++] = tmp;
        tmp = "";
    }

    tkns[num++] = tmp;

    bool valid = true;

    for (int i = 0; i < 4; ++i) {
        if (tkns[i].size() == 0) {
            valid = false;
            break;
        }

        int tkn = atoi(tkns[i].c_str());

        if (tkn < 0 || tkn > 255) {
            valid = false;
            break;
        }
    }

    cout << (valid ? 1 : 0) << endl; 
}
