#include<iostream>

using namespace std;

int invert(int n) {
    return ~n;
}

int main() {
    int n; cin >> n;

    cout << invert(n) << endl;
}
