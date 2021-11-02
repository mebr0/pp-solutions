#include<iostream>

using namespace std;

// count 1 bits in n
int count_bits(int n) {
    int cnt = 0;

    while (n) {
        cnt += n & 1;
        n >>= 1;
    }

    return cnt;
}

int main() {
    int n; cin >> n;

    for (int i = 0; i <= n; ++i) {
        cout << count_bits(i);

        if (i != n) {
            cout << ',';
        }
    }

    cout << endl;
}
