#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// sort for solving this problem within one vector
bool unusual_sort(int a, int b) {
    if (a % 2 == 0)
        if (b % 2 == 0)
            return a > b;
        else
            return true;
    else
        if (b % 2 == 0)
            return false;
        else
            return a < b;
}

int main() {
    int n; cin >> n;
    // vector<int> evens, odds;

    // for (int i = 0; i < n; ++i) {
    //     int x; cin >> x;

    //     if (x % 2 == 0) {
    //         evens.push_back(x);
    //     } else {
    //         odds.push_back(x);
    //     }
    // }

    // sort(evens.rbegin(), evens.rend());
    // sort(odds.begin(), odds.end());

    // for (auto x: evens) {
    //     cout << x << ' ';
    // }

    // for (auto x: odds) {
    //     cout << x << ' ';
    // }

    // cout << endl;

    // return 0;

    vector<int> nums;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        nums.push_back(x);
    }

    sort(nums.begin(), nums.end(), unusual_sort);

    for (auto x: nums) {
        cout << x << ' ';
    }

    cout << endl;
}
