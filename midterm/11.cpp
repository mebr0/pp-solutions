#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n; char c; cin >> n >> c;

    if (c == 'k') {
        int k; cin >> k;
        cout << fixed << setprecision(k) << 1.0 * n / 1024 << endl;
    } else {
        cout << n * 1024 << endl;
    }
}
