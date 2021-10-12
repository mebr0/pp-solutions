#include<iostream>

using namespace std;

// https://www.geeksforgeeks.org/reverse-actual-bits-given-number/
int main() {
    int n; cin >> n;
    int res = 0;

    // work with bits of n from right and append same bits to res from left
    // use right and left shifts respectively
    // if condition checks if n ends with 1 bit, set bit 1 in res too
    while (n > 0) {
        res <<= 1;

        if (n & 1 == 1) {
            res ^= 1;
        }

        n >>= 1;
    }
     
    cout << res << endl;
}
