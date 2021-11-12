#include<iostream>

using namespace std;

int degree2(int n) {
    if (n <= 0) {
        return 1;
    }

    return 2 * degree2(n - 1);
}

int main() {
    int n; cin >> n;

    cout << degree2(n) << endl;
}
