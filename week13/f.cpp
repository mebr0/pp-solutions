#include<iostream>

using namespace std;

struct common_divisor {
    int a;
    int b;

    // iterate from minimum of a and b till 0
    int kth(int k) {
        int cnt = 0;

        for (int i = min(a, b); i > 0; --i) {
            if (a % i == 0 && b % i == 0) {
                cnt++;
            }

            if (cnt == k) {
                return i;
            }
        }
    }
};

int main() {
    int a, b; cin >> a >> b;

    common_divisor div;

    div.a = a;
    div.b = b;

    int k; cin >> k;

    cout << div.kth(k) << endl;
}
