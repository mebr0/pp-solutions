#include<iostream>

using namespace std;

int N = 8;

// increment neighbors around mine
void incr_neighbors(int** a, int i, int j, int n, int m) {
    // all directions pairs
    int dx[N] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[N] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for (int k = 0; k < N; ++k) {
        int x = i + dx[k], y = j + dy[k];

        // check bounds
        if (-1 < x && x < n && -1 < y && y < m) {
            // check if it is not mine
            if (a[x][y] != -1) {
                a[x][y]++;
            }
        }
    }
}

// print minesweeper field
void print_field(int** a, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // print other symbols for numbers <= 0
            if (a[i][j] == -1) {
                cout << '*';
            } else if (a[i][j] == 0) {
                cout << '.';
            } else {
                cout << a[i][j];
            }

            cout << ' ';
        }

        cout << endl;
    }
}

int main() {
    int n, m; cin >> n >> m;
    int** a = new int*[n];

    for (int i = 0; i < n; ++i) a[i] = new int[m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            a[i][j] = 0;

    int k; cin >> k;

    for (int i = 0; i < k; ++i) {
        int x, y; cin >> x >> y;

        a[x][y] = -1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // if it is mine, increment all neighbors
            if (a[i][j] == -1) {
                incr_neighbors(a, i, j, n, m);
            }
        }
    }

    print_field(a, n, m);
}
