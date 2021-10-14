#include<iostream> 
  
using namespace std; 
 
int main() { 
    string s; cin >> s;

    bool alph = true;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i - 1] > s[i]) {
            alph = false;
            break;
        }
    }

    cout << (alph ? "YES" : "NO") << endl;
}
