#include<iostream>

using namespace std;

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int a, b, c; cin >> a >> b >> c;

    a += 1;

    // check bounds
    if (a > months[b - 1]) {
        a = 1;
        b += 1;

        if (b > 12) {
            b = 1;
            c += 1;
        }
    }

    cout << a << ' ' << b << ' ' << c << endl;
}
