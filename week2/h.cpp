#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int i = 0;
    int even = 0, odd = 0;

    while (i++ < n) {
        int a; cin >> a;

        if (a % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << even << ' ' << odd << endl;
}
