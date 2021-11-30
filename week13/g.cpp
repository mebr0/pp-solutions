#include<iostream>
#include<map>

using namespace std;

struct att {
    string name;
    int day;

    // override operators for using att as key in map
    bool operator==(const att &a) const {
        return name == a.name && day == a.day;
    }

    bool operator<(const att &a) const {
        if (name != a.name) {
            return name < a.name;
        }

        return day < a.day;
    }
};

struct atts {
    // mark each att
    map<att, bool> rows;
    // counts of name in att
    map<string, int> cnts;

    // add att (ignore duplicates)
    void add(att att) {
        if (!rows[att]) {
            rows[att] = true;
            cnts[att.name]++;
        }
    }

    // return names with bonuses
    map<string, bool> bonuses() {
        map<string, bool> b;

        for (auto cnt: cnts) {
            b[cnt.first] = cnt.second >= 3;
        }

        return b;
    }
};

int main() {
    int n; cin >> n;

    atts atts;

    for (int i = 0; i < n; ++i) {
        string name; cin >> name;
        int day; cin >> day;

        att att;
        att.name = name;
        att.day = day;

        atts.add(att);
    }

    map<string, bool> bs = atts.bonuses();

    for (auto b: bs) {
        cout << b.first << ' ' << (b.second ? "+1" : "NO BONUS") << endl;
    }
}
