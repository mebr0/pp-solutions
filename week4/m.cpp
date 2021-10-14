#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 0;
        }
    }

    int cnt = 1;
    int x = 0, y = 0;
    int dx = 0, dy = 1;

    // fill until cnt reach n^2
    while (cnt <= n * n) {
        a[x][y] = cnt++;

        // if can go further then continue
        if (x + dx > -1 && x + dx < n && y + dy > -1 && y + dy < n) {
            if (a[x + dx][y + dy] == 0) {
                x += dx;
                y += dy;
                continue;
            }
        }

        // otherwise change direction
        if (dx == 0 && dy == 1) {
            dx = 1; dy = 0;
        } else if (dx == 1 && dy == 0) {
            dx = 0; dy = -1;
        } else if (dx == 0 && dy == -1) {
            dx = -1; dy = 0;
        } else {
            dx = 0; dy = 1;
        }

        x += dx;
        y += dy;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
}
