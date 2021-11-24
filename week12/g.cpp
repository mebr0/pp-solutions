#include<iostream>
#include<map>

using namespace std;

int main() {
    int n; cin >> n;

    map<pair<pair<string, int>, pair<string ,int>>, bool> teams;

    for (int i = 0; i < n; ++i) {
        string name1; cin >> name1;
        int score1; cin >> score1;
        string name2; cin >> name2;
        int score2; cin >> score2;

        pair<string, int> stud1 = make_pair(name1, score1);
        pair<string, int> stud2 = make_pair(name2, score2);
        auto team = make_pair(stud1, stud2);

        teams[team] = true;
    }

    for (auto team: teams) {
        string names = team.first.first.first + " and " + team.first.second.first;
        int score = team.first.first.second + team.first.second.second;

        cout << names << ' ' << score << endl;
    }
}
