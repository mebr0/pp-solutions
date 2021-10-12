#include<iostream>

using namespace std;

// Todo: test 4
int main() {
    int n, m; cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    bool found = false;
    int ind = 0;

    for (int i = 0; i < n; ++i) {
        // if equal then found
        if (m == a[i]) {
            found = true;
            ind = i;
            break;
        }

        // if exceeded then can be replaced
        if (m < a[i]) {
            found = true;
            ind = i;
            break;
        }
    }

    // if found then output index, else length of array as new position in the end
    if (found) {
        cout << ind << endl;
    } else {
        cout << n << endl;
    }
}
