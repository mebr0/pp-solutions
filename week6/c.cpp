#include<iostream>

using namespace std;

// return count of same elements in both arrays
int same(int a[], int b[], int size) {
    int same_cnt = 0;
    int cnt[100];

    for (int i = 0; i < 100; ++i) cnt[i] = 0;

    for (int i = 0; i < size; ++i) {
        cnt[a[i] - 1]++;
    }

    for (int i = 0; i < size; ++i) {
        if (cnt[b[i] - 1] != 0) {
            same_cnt++;
            cnt[b[i] - 1]--;
        }
    }

    return same_cnt;
}

int main() {
    int n; cin >> n;
    int a[n], b[n];
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    cout << same(a, b, n) << endl;
}