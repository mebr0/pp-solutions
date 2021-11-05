#include<iostream>

using namespace std;

int main() {
    int n, cnt = 0;

    while (cin >> n && n % 3 == 0) {
        cnt++;
    }

    cout << cnt << endl;
}
