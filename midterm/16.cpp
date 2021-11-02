#include<iostream>

using namespace std;

// days in months
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// check whether date is valid
bool is_valid_date(int d, int m, int y) {
	if (m > 12 || m < 1) {
		return false;
	}

	if (d > days[m - 1] || d < 1) {
		return false;
	}

	if (y > 2035 || y < 1970) {
		return false;
	}

	return true;
}

int main() {
	int d, m, y; cin >> d >> m >> y;

	cout << (is_valid_date(d, m, y) ? "YES" : "NO") << endl;
}