#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;

    map<string, int> places;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        int m; cin >> m;

        for (int j = 0; j < m; ++j) {
            string place; cin >> place;
            int count; cin >> count;

            places[place] += count;
            cnt += count;
        }
    }

    for (auto p: places) {
        cout << p.first << ' ' << p.second * 100.0 / cnt << endl;
    }
}
