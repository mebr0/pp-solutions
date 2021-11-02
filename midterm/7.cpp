#include<iostream>

using namespace std;

// return n-th bit of x
int nth_bit(int x, int n) {
    for (int i = 0; i < n; ++i) {
        x /= 2;
    }

    return x & 1;
}

int main() {
    int a, n, b, m; cin >> a >> n >> b >> m;

    cout << (nth_bit(a, n) == nth_bit(b, m) ? "Thunderclap and Flash!" : "Thunder Breathing... First form...") << endl;
}
