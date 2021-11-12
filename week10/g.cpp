#include<iostream>
#include<vector>

using namespace std;

// check whether n is prime
bool is_prime(int n) {
	for (int i = 2; i < n; i++) {	
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

    int k; cin >> k;

    int cnt = 0;

    for (auto i: v) {
        if (i >= k && is_prime(i)) {
            cnt++;
        }
    }

    cout << cnt << endl;
}
