#include<iostream>

using namespace std;

int a(int i) {
    return 2 + 3 * i;
}

int main() {
	int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << a(i) << ' ';
    }

    cout << endl;
}
