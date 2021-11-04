#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    char a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    int orks = 0, dragons = 0, humans = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 'O') {
            orks++;
        } else if (a[i] == 'D') {
            dragons++;
        } else {
            humans++;
        }
    }

    cout << "Orks: " << orks / 3 << endl;
    cout << "Dragons: " << dragons / 3 << endl;
    cout << "Humans: " << humans / 3 << endl;
}
