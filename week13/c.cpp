#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

struct score {
    string name;
    double value;
};

struct scores {
    int sum = 0;
    map<string, int> sc;
    
    // count score by name and count to overall scores
    void add(string name, int score) {
        sc[name] += score;
        sum += score;
    }

    // return scores with percents
    vector<score> get() {
        vector<score> v;

        for (auto s: sc) {
            score scr;

            scr.name = s.first;
            scr.value = s.second * 100.0 / sum;

            v.push_back(scr);
        }

        return v;
    }
};

int main() {
    int n; cin >> n;

    scores scrs;

    for (int i = 0; i < n; ++i) {
        string name; cin >> name;
        int score; cin >> score;

        scrs.add(name, score);
    }

    vector<score> sc = scrs.get();

    // sort first by values, then by names
    sort(sc.rbegin(), sc.rend(), [] (score a, score b) {
        if (a.value != b.value) {
            return a.value < b.value;
        }

        return a.name < b.name;
    });

    for (auto s: sc) {
        cout << s.name << ' ' << s.value << '%' << endl;
    }
}
