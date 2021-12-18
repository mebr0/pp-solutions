#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> v;    

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int ans = 1;

    for (int i = v.size() - 2; i > -1; --i) {
        if (v[i] != v[i+1]) {
            break;
        }

        ans++;
    }

    cout << ans << endl;
}
