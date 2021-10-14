#include<iostream>

using namespace std;

// return absolute value of integer
int positive(int n) {
    if (n < 0) {
        return -n;
    }

    return n;
}

int main() {
    int n; cin >> n;

    cout << positive(n) << endl;
}
