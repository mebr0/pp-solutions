#include<iostream>

using namespace std;

// return gcd of two numbers
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }

    return a;
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int maxi = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int cur = gcd(a[i], a[j]);

            if (cur > maxi) {
                maxi = cur;
            }
        }
    }

    cout << maxi << endl;
}
