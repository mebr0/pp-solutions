#include<iostream>

using namespace std;

int main() {
	int n, a, d; cin >> n >> a >> d;
	int seq[n];

	for (int i = 0; i < n; ++i) {
		seq[i] = a + i * d;
	}

	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += seq[i];
		cout << seq[i] << ' ';
	}

	cout << endl;

	cout << "sum: " << sum << endl;
}
