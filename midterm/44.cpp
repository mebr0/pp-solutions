#include<iostream>

using namespace std;

void print_tsunami(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // ...
            if (n % 2 == 0 && i >= j || n % 2 == 1 && i + j >= n - 1) {
                cout << '#';
            } else {
                cout << '.';
            }
        }

        cout << endl;
    }
}

int main() {
    int n; cin >> n;

    print_tsunami(n);
}
