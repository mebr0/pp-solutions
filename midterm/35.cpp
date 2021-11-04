#include<iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    
    int last = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        // first one
        if (last == 0) {
            last = a;
            continue;
        }

        if (a < last) {
            k *= 2;
        } else {
            k -= 1;
        }

        last = a;
    }

    cout << k << endl;
}
