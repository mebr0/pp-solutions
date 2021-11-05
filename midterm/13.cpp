#include<iostream>

using namespace std;

// check whether n is prime
bool is_prime(int n) {
	for (int i = 2; i < n; i++) {	
		if (n % i == 0) {
            return false;
        }
	}

	return true;
}

int main() {
	int n, f; cin >> n >> f;

	cout << (n < 500 && is_prime(n) && f % 2 == 0 ? "Good job!" : "Try next time!") << endl;
}
