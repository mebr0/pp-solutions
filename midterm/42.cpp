#include<iostream>

using namespace std;

// return new transposed 2d array
int** transpose(int **a, int rows, int cols) {
    int** arr = new int*[cols];

    for (int i = 0; i < cols; ++i) {
        arr[i] = new int[rows];

        for (int j = 0; j < rows; ++j) {
            arr[i][j] = a[j][i];
        }
    }

    return arr;
}

int main() {
    int n, m; cin >> n >> m;
    int** a = new int*[n];

    for (int i = 0; i < n; ++i) a[i] = new int[m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];

    int** t = transpose(a, n, m);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << t[i][j] << ' ';
        }

        cout << endl;
    }
}
