#include<iostream>

using namespace std;

int main() {
	int n, m, b; cin >> n >> m >> b;

	cout << (b * 1.0 / (n + m) <= 0.1 ? "You are my sweet baby" : "Boris, you are punished!") << endl;
}