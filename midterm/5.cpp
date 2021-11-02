#include<iostream>

using namespace std;

int g(int x, int y) {
    return x ^ (y ^ (x + y));
}

int main() {
    int x, y; cin >> x >> y;

    cout << g(x, y) << endl;
}
