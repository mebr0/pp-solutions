#include<iostream>
#include<map>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    map<int, int> m;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        m[x]++;
    }

    cout << m[k] << endl;
}
