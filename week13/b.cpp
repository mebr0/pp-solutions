#include<iostream>
#include<set>

using namespace std;

struct arr {
    int size = 0;
    set<int> s;

    // add number and increment size
    void insert(int n) {
        size++;
        s.insert(n);
    }

    // set contains unique if set size is equal to count of add operations
    bool unique() {
        return s.size() == size;
    }
};

int main() {
    int n; cin >> n;

    arr arr;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        arr.insert(x);
    }

    cout << (arr.unique() ? "YES" : "NO") << endl;
}
