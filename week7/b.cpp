#include<iostream>
#include<string>

using namespace std;

string to_binary(int n) {
    if (n == 0) {
        return "";
    }

    return to_binary(n >> 1) + to_string(n & 1 == 1 ? 1 : 0);
}

int main() {
    int n; cin >> n;

    cout << to_binary(n) << endl;
}
