#include<iostream>

using namespace std;

int main() {
	long long a, b; cin >> a >> b;

	bool less = true;

	// make a less than b
	if (a > b) {
		less = false;

		long long temp = a;
		a = b;
		b = temp;
	}

	int pow = 0;

	while (b > a && b % 2 == 0) {
		b /= 2;
		pow++;
	}

	if (!less) {
		pow = -pow;
	}

	if (b == a) {
		cout << "YES" << ' ' << pow << endl;
	} else {
		cout << "NO" << endl;
	}
}
