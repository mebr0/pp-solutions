#include<iostream> 
  
using namespace std; 
 
int main() { 
    string s; cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        // change z to a, otherwise shift right
        if (s[i] == 'z') {
            s[i] = 'a';
        } else {
            s[i] += 1;
        }
    }

    cout << s << endl;
}
