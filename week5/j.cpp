#include<iostream> 
  
using namespace std; 
 
int main() { 
    string s; cin >> s;

    int len = s.size();
    bool pal1 = true, pal2 = true;

    for (int i = 0; i < len / 2; ++i) {
        // wait until unmatch
        if (s[i] != s[len - 1 - i]) {

            // validate other part of string without left letter (i index)
            for (int j = i + 1; j <= len / 2; ++j) {
                if (s[j] != s[len - j]) {
                    pal1 = false;
                    break;
                }
            }

            // validate other part of string without right letter (len - 1 - i index)
            for (int j = i; j <= len / 2; ++j) {
                if (s[j] != s[len - 1 - j - 1]) {
                    pal2 = false;
                    break;
                }
            }
        }
    }

    // if any validated then YES, otherwise NO
    cout << (pal1 || pal2 ? "YES" : "NO") << endl;
}
