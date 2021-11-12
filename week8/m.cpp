#include<iostream>
#include<set>

using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        s.insert(x);
    }

    int sum = 0;

    for (int i : s) {
        sum += i;
    }

    cout << sum << endl;
}
