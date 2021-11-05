#include<iostream>

using namespace std;

// check whether n contains digit
bool contains_digit(int n, int digit) {
	while (n != 0) {
		if (n % 10 == digit) {
			return true;
		}

		n /= 10;
	}

	return false;
}

int main() {
	int a, b; cin >> a >> b;

	for (int i = a; i <= b; ++i) {
		if (contains_digit(i, 5)) {
			cout << i << ' ';
		}
	}

	cout << endl;
}
