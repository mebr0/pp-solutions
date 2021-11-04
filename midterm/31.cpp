#include<iostream>

using namespace std;

// return reversed int, i.e. reversed digits
int reverse_int(int n) {
    int res = 0;

    while (n != 0) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    bool pal = true;

    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != reverse_int(a[n - 1 - i])) {
            pal = false;
            break;
        }
    }

    cout << (pal ? "YES" : "NO") << endl;
}
