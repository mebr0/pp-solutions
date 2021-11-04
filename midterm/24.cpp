#include<iostream>

using namespace std;

int main() {
	int n; cin >> n;

	int iphone = 500000, cnt = 0;

	while (iphone > 0) {
		iphone -= n * 0.3;
		n *= 1.1;
		cnt++;
	}

	cout << cnt << endl;
}
