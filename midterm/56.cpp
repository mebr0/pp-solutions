#include<iostream>

using namespace std;

// return hexadecimal representation of digit
char to_hex(int n) {
    if (0 <= n && n <= 9) {
        return n + '0';
    } else {
        return (n - 10) + 'A';
    }
}

// return hexadecimal representation of number
string to_hex_repr(int n) {
    string res = "";

    while (n != 0) {
        res = to_hex(n % 16) + res;
        n /= 16;
    }

    return res;
}

int main() {
    int n; cin >> n;

    cout << to_hex_repr(n) << endl;
}
