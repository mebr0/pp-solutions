#include<iostream>

using namespace std;

// bubble sort implementation with reversed function
void bubble_sort(int a[], int size, bool reversed) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (!reversed && a[i] > a[j]) {
                swap(a[i], a[j]);
            } else if (reversed && a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];
    
    for (int i = 0; i < n; ++i) {
        // reverse order if i is odd
        bubble_sort(a[i], m, i % 2 == 1);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
}
