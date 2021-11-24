#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    
    vector<string> names;
    vector<int> marks;

    for (int i = 0; i < n; ++i) {
        string name; cin >> name;
        int mark; cin >> mark;

        names.push_back(name);
        marks.push_back(mark);
    }

    sort(names.begin(), names.end());
    sort(marks.begin(), marks.end());

    for (int i = 0; i < n; ++i) {
        cout << names[i] << ' ' << marks[i] << endl;
    }
}
