#include<iostream>

using namespace std;

// xor elements in array
int xor_all(int a[], int size) {
    int res = a[0];

    for (int i = 1; i < size; ++i) {
        res ^= a[i];
    }

    return res;
}

// check whether number is power of 2
bool is_pow_2(int n) {
    while (n % 2 == 0) {
        n /= 2;   
    }

    return n == 1;
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int xors = xor_all(a, n);

    cout << (is_pow_2(xors) ? "YES" : "NO") << endl;
}
