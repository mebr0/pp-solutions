#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long f() {
    static long long n;

    // calc n^n this way
    // pow from cmath does not work properly
    long long res = 1;

	for (int i = 0; i < n; ++i) {
		res *= n; 
	}

    n++;

    return res;
}

int main() {
    int n; cin >> n;
    vector<long long> seq(n + 1);

    generate(seq.begin(), seq.end(), f);

    for (auto a: seq) {
        cout << a << ' ';
    }

    cout << endl;
}
