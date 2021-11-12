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

    // max_element and min_element return iterator
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    cout << maxi - mini << endl;
}
