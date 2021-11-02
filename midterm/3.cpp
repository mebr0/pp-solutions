#include<iostream>

using namespace std;

int N = 8;

// convert to array of bits as bool array
bool* to_bit_array(int n) {
    bool* bits = new bool[N];

    for (int i = N - 1; i > -1; --i) {
        bits[i] = n & 1;
        n >>= 1;
    }

    return bits;
}

// check whether array is palindrome
bool is_pal(bool arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n; cin >> n;

    bool* bits = to_bit_array(n);

    cout << (is_pal(bits, N) ? "It works!" : "Sad") << endl;
}
