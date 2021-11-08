#include<iostream>

using namespace std;

bool is_pow2(long long n) {
    if (n % 2 != 0) {
        return n == 1;
    }

    return is_pow2(n / 2);
}

int main() {
    long long n; cin >> n;

    cout << (is_pow2(n) ? "Yes" : "No") << endl;
}
