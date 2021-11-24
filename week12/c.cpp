#include<iostream>
#include<stack>
#include<string>
#include<cmath>

using namespace std;

bool perf_sqr(int n) {
    int sr = sqrt(n);

    return sr * sr == n;
}

int main() {
    string s; cin >> s;

    stack<char> chrs;

    for (int i = 0; i < s.size(); ++i) {
        if (chrs.empty()) {
            chrs.push(s[i]);
            continue;
        }

        // construct number and check for perfect square
        char top = chrs.top();
        
        string str_num;
        str_num += top;
        str_num += s[i];

        int num = stoi(str_num);

        if (perf_sqr(num)) {
            chrs.pop();
        } else {
            chrs.push(s[i]);
        }
    }

    if (chrs.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        while (!chrs.empty()) {
            cout << chrs.top();
            chrs.pop();
        }

        cout << endl;
    }
}
