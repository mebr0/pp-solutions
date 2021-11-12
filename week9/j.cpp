#include<iostream>

using namespace std;

// return halfed sum of digits
int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) / 2 + sum_digits(n / 10);
}

int main() {
    int n; cin >> n;

    cout << sum_digits(n) << endl;
}
