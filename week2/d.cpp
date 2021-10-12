#include<iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    if (n <= k) {
        cout << 2 << endl;
    } else {
        int w = 2 * n / k;

        if ((2 * n) % k == 0) {
            cout << w << endl;
        } else {
            cout << w + 1 << endl;
        }
    }
}
