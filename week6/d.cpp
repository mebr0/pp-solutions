#include<iostream>

using namespace std;

// return whether target exists in array
bool exists(int a[], int size, int target) {
    bool exists = false;

    for (int i = 0; i < size; ++i) {
        if (a[i] == target) {
            exists = true;
            break;
        }
    }

    return exists;
}

int main() {
    int n; cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    int x; cin >> x;
    
    cout << (exists(a, n, x) ? "YES" : "NO") << endl;
}