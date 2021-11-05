#include<iostream>

using namespace std;

// return n-th bit of x
int nth_bit(int x, int n) {
    return (x & (1 << n)) > 0 ? 1 : 0;
}

int main() {
    int n, a, b; cin >> n >> a >> b;

    int a_bit = nth_bit(a, n);
    int b_bit = nth_bit(b, n);

    // change if bits different
    if (a_bit != b_bit) {
        int value = 1 << n;

        if (a_bit == 0) {
            a += value;
            b -= value;
        } else {
            a -= value;
            b += value;
        }
    }

    if (a == b) {
        cout << "Nothing has changed" << endl;
    } else if (a > b) {
        cout << "Good deal for the first number" << endl;
    } else {
        cout << "Good deal for the second number" << endl;
    }
}
