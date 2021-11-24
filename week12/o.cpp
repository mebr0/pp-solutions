#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string to_binary(int n) {
    if (n == 0) {
        return "";
    }

    return to_binary(n >> 1) + to_string(n & 1 == 1 ? 1 : 0);
}

int main() {
    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    for_each(v.begin(), v.end(), [] (int x) {
        cout << to_binary(x) << endl;
    });
}
