#include<iostream>

using namespace std;

// return ratio
double calc_ratio(int price, int quality) {
    return 1.0 * quality / price;
}

int main() {
    int n; cin >> n;
    string ph[n];
    int p[n], q[n];

    double max = 0;
    string max_ph = "";

    for (int i = 0; i < n; ++i) {
        cin >> ph[i] >> p[i] >> q[i];
        
        double ratio = calc_ratio(p[i], q[i]);

        if (ratio > max) {
            max = ratio;
            max_ph = ph[i];
        }
    }
    
    cout << max_ph << endl;
}
