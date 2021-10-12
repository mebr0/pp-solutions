#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n; cin >> n;
    bool prime = true;

    // check numbers from 2 to square root
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    cout << (prime && n != 1 ? "Yes" : "No") << endl;
}
