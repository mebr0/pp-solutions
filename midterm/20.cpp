#include<iostream>

using namespace std;

bool is_beautiful(long long n) {
	int last = 0, sum = 0;

	while (n != 0) {
		last = n % 10;
		sum += n % 10;

		n /= 10;
	}

	return (sum - last) % 10 == last;
}

int main() {
	long long x; cin >> x;

	cout << (is_beautiful(x) ? "YES" : "NO") << endl;
}
