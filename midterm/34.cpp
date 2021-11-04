#include<iostream>

using namespace std;

int N = 15;

int main() {
    char a[N], b[N];

    for (int i = 0; i < N; ++i) cin >> a[i];
    for (int i = 0; i < N; ++i) cin >> b[i];

    int cnt_1 = 0, cnt_2 = 0;

    for (int i = 0; i < N; ++i) {
        if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R')) {
            cnt_1++;
        } else if ((b[i] == 'R' && a[i] == 'S') || (b[i] == 'S' && a[i] == 'P') || (b[i] == 'P' && a[i] == 'R')) {
            cnt_2++;
        }
    }

    if (cnt_1 > cnt_2) {
        cout << "First player wins!" << endl;
    } else if (cnt_2 > cnt_1) {
        cout << "Second player wins!" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}
