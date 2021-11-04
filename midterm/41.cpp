#include<iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    
    int maxi = 0;

    for (int i = 0; i < n; ++i) {
        int row_sum = 0;
        
        for (int j = 0; j < m; ++j) {
            row_sum += a[i][j];
        }

        if (row_sum > maxi) {
            maxi = row_sum;
        }
    }

    cout << maxi << endl;
}
