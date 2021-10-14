#include<iostream>

using namespace std;

// print array in reversed order
void rprint(int a[], int size) {
    for (int i = size - 1; i > -1; --i) {
        cout << a[i] << ' ';
    }

    cout << endl;
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    rprint(a, n);
}
