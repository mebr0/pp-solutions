#include<iostream>

using namespace std;

int main() {
    long long d, c, n; cin >> d >> c >> n;
    long long di, ci; cin >> di >> ci;

    long long money = di * 100 + ci;
    long long need = n * d * 100 + n * c;

    if (money < need) {
        cout << -1 << endl;
    } else {
        long long diff = money - need;

        cout << diff / 100 << ' ' << diff % 100 << endl;
    }
}
