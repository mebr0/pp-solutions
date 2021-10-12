#include<iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int first = k / 100;
    int third = k % 10;

    cout << n + first + third << endl;
}
