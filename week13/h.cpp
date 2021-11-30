#include<iostream>

using namespace std;

struct shifter {
    string str;
    
    // shift each char in str by n
    string shift(int n) {
        string s = "";

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] + n > 'Z') {
                s += 'A' + (n + str[i] - 1 - 'Z');
            } else {
                s += str[i] + n;
            }
        }

        return s;
    }
};

int main() {
    int n; cin >> n;
    string s; cin >> s;

    shifter sh;

    sh.str = s;

    cout << sh.shift(n) << endl;
}
