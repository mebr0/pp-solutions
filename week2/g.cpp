#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int i = 0;
    int maxi;

    while (i++ < n) {
        int a; cin >> a;

        if (i == 1) {
            maxi = a;
            continue;
        }
        
        if (a > maxi) {
            maxi = a;
        }
    }

    cout << maxi << endl;
}
