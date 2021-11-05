#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    
    int i = 0, units = 0;
    string res = "";

    while (n != 0) {
        if (n & 1 == 1) {
            units++;
            res = '1' + res;
        } else {
            res = '0' + res;
        }

        n /= 2;
        i++;
    }

    cout << res << endl;
    cout << "zeros " << i - units << endl;
    cout << "number of units " << units << endl;
}
