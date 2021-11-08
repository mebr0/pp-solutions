#include<iostream>

using namespace std;

void print_range(int n, int i) {
    if (i > n) {
        return;
    }

    cout << i << ' ';

    print_range(n, i + 1);
}

int main() {
    int n; cin >> n;

    print_range(n, 1);
}
