#include<iostream>

using namespace std;

int main() {
	int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int z; cin >> z;

    int sh[n];

    for (int i = 0; i < n; ++i) {
        // for new array shifting right is substracton of z
        sh[i] = a[(i - z + n) % n];
    }

    for (int i = 0; i < n; ++i) {
        cout << sh[i] << ' ';
    }

    cout << endl;
}
