#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
            cin >> a[i][j];

    int maxi = a[0][0];
    int x = 0, y = 0;

    for (int i = 0; i < n; ++i) {
        // a[i][i] - element of main diagonal
        if (a[i][i] > maxi) {
            maxi = a[i][i];
            x = i;
            y = i;
        }
    }

    cout << "Maximum element is: " <<  maxi << " with coordinates: " << x + 1 << ';' << y + 1 << endl;
}
