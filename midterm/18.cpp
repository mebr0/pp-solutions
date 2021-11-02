#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int n;
	int cnt = 0, even = 0, odd = 0;

	while (cin >> n && n >= 0) {
		if (n % 2 == 0) {
			even++;
		} else {
			odd++;
		}

		cnt++;
	}

	printf("%.5f %.5f\n", even * 100.0 / cnt, odd * 100.0 / cnt);
}