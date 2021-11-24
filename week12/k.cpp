#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

bool is_prime(int n) {
    if (n == 0 || n == 1 || n == -1) {
        return false;
    }

    if (n < 0) {
        n = -n;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    cout << count_if(v.begin(), v.end(), is_prime) << endl;
}
