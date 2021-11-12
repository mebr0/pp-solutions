#include<iostream>

using namespace std;

char to_char(int n) {
    if (0 <= n && n <= 9) {
        return n + '0';
    }

    return n + 'A' - 10;
}

string to_knary(int n, int k) {
    if (n == 0) {
        return "";
    }

    return to_knary(n / k, k) + to_char(n % k);
}

int main() {
    int n, k; cin >> n >> k;

    cout << to_knary(n, k) << endl;
}
