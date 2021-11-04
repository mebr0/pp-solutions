#include<iostream>
#include<cmath>

using namespace std;

int N = 8;

// return sign for location and location of queen
char sign(int i, int j, int x, int y) {
    // queen herself
    if (i == x && j == y) {
        return '1';
    }
    
    // horizontal or vertical moves
    if (i == x || j == y) {
        return '2';
    }

    // diagonal moves
    if (abs(x - i) == abs(y - j)) {
        return '2';
    }

    return '*';
}

int main() {
    int x, y; cin >> x >> y;

    if (-1 < x && x < N && -1 < y && y < N) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << sign(i, j, x, y) << ' ';
            }

            cout << endl;
        }
    } else {
        cout << "Impossible" << endl;
    }
}
