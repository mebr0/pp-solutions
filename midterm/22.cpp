#include<iostream>
#include<string>

using namespace std;

string get_code(string s) {
	string code = "";

	for (int i = 0; i < s.size(); ++i) {
		if ('0' <= s[i] && s[i] <= '9') {
			code = s[i] + code;
		}
	}

	return code;
}

int main() {
	string s; getline(cin, s);

	cout << get_code(s) << endl;
}
