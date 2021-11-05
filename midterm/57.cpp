#include<iostream>

using namespace std;

// print even range from l to r
void printr(int l, int r) {
    for (int i = l; i <= r; ++i) {
		if (i % 2 == 0) {
			cout << i << ' ';
		}
	}

    cout << endl;
}

int main() {
    int l, r; cin >> l >> r;

	printr(l, r);
}
