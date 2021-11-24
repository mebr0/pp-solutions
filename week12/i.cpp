#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    vector<int> rev(v.size());
    copy(v.begin(), v.end(), rev.begin());

    reverse(rev.begin(), rev.end());

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] != rev[i]) {
            cout << "Instead of " << v[i] << " here was " << rev[i] << endl;
        } else {
            cout << "OK" << endl;
        }
    }
}
