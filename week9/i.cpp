#include<iostream>

using namespace std;

// read until 0 and return sum
int read_and_count() {
    int n;

    if (cin >> n && n != 0) {
        return n + read_and_count();
    }

    return 0;
}

int main() {
    cout << read_and_count() << endl;
}
