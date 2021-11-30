#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct common_chars {
    int size = 0;
    map<char, int> cnt;

    // count chars in string
    void add(string s) {
        size++;

        map<int, bool> used;

        for (int i = 0; i < s.size(); ++i) {
            if (!used[s[i]]) {
                used[s[i]] = true;
                cnt[s[i]]++;
            }
        }
    }

    // return common chars
    // commons chars are those whose counter is equal to number of insertions
    vector<char> get() {
        vector<char> common;

        for (auto chr: cnt) {
            if (chr.second == size) {
                common.push_back(chr.first);
            }
        }

        return common;
    }
};

int main() {
    int n; cin >> n;

    common_chars chrs;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;

        chrs.add(s);
    }

    vector<char> common = chrs.get();

    if (common.empty()) {
        cout << "NO COMMON CHARACTERS" << endl;
    } else {
        for (auto chr: common) {
            cout << chr << ' ';
        }

        cout << endl;
    }
}
