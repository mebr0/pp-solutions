#include<iostream>

using namespace std;

// days in months
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m, d; cin >> m >> d;

    if (m > 12 || m < 1) {
        cout << "Not correct" << endl;
    } else if (d > days[m - 1] || d < 1) {
        cout << "Not correct" << endl;
    } else {
        int cnt = 0;

        for (int i = 0; i < m - 1; ++i) {
            cnt += days[i];
        }

        cnt += d;

        cout << 366 - cnt <<endl;
    }
}
