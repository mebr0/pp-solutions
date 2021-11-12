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

    auto it = s.begin();

    while (it != s.end()) {
        // set::erase return iterator to next element
        // otherwise next element
        if (*it % 2 == 0) {
            it = s.erase(it);
        } else {
            it++;
        }
    }

    for (int i : s) {
        cout << i << ' ';
    }

    cout << endl;
}
