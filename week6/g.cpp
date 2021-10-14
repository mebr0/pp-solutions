#include<iostream>
#include<string>

using namespace std;

// return string with removed vowels
string remove_vowels(string s) {
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o' && 
        s[i] != 'A' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'O') {
            res += s[i];
        }
    }

    return res;
}

int main() {
    string s; getline(cin, s);

    cout << remove_vowels(s) << endl;
}
