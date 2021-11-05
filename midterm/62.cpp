#include<iostream>
#include<cmath>

using namespace std;

// return number of title
int to_number(string s) {
    int res = 0;

	for (int i = 0; i < s.size(); ++i) {
		res += (s[i] - 'A' + 1) * pow(26, s.size() - 1 - i);
	}

    return res;
}

int main() {
    string s; cin >> s;
	
	cout << to_number(s) << endl;
}
