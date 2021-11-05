#include<iostream>

using namespace std;

// return whether array sorted
bool is_sorted(int a[], int size) {
    for (int i = 1; i < size; ++i) {
        if (a[i - 1] > a[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << (is_sorted(a, n) ? "Sorted" : "Not sorted") << endl;
}
