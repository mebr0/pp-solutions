#include<iostream>

using namespace std;

struct days {
    const static int N = 7;

    const string days[N] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    // return number of days until Sunday
    int till_sunday(string day) {
        for (int i = 0; i < N; ++i) {
            if (days[i] == day) {
                return N - i;
            }
        }

        return -1;
    }
};

int main() {
    string day; cin >> day;

    days days;

    cout << days.till_sunday(day) << endl;
}
