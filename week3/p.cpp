#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int i = 1;
    bool found = false;

    while (i * i <= n) {
        if (i * i == n) {
            found = true;
        }

        i++;
    }

    cout << (found ? "Yes" : "No") << endl;
}
