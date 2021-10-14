#include<iostream> 
  
using namespace std; 
 
int main() { 
    string s, t; cin >> s >> t;

    bool cont = true;
    int s_len = s.size(), t_len = t.size();

    // if s longer then t or lenghts not divisible to each other then NO
    if (s_len > t_len || t_len % s_len != 0) {
        cont = false;
    }

    if (cont) {
        for (int i = 0; i < t_len; i += s_len) {
            for (int j = 0; j < s_len; ++j) {
                if (s[j] != t[i + j]) {
                    cont = false;
                    break;
                }
            }
        }
    }

    cout << (cont ? "YES" : "NO") << endl;
}
