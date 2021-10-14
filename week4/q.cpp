#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;

    // i - count of dots, then count of asterikses can be obtained as 2*n-2*i-1
    for (int i = n - 1; i > -1; --i) {
        for (int j = 0; j < i; ++j) {
            cout << '.';
        }

        for (int j = 0; j < 2 * n - 2 * i - 1; ++j) {
            cout << '*';
        }

        for (int j = 0; j < i; ++j) {
            cout << '.';
        }

        cout << endl;
    }
}
