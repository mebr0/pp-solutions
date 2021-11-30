#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

double compute_gpa(pair<int, int> pts) {
    if (pts.first < 30) {
        return 0;
    }

    if (pts.second < 20) {
        return 0;
    }

    int att = pts.first + pts.second;

    if (95 <= att) {
        return 4;
    } else if (90 <= att) {
        return 11.0 / 3;
    } else if (85 <= att) {
        return 10.0 / 3;
    } else if (80 <= att) {
        return 3;
    } else if (75 <= att) {
        return 8.0 / 3;
    } else if (70 <= att) {
        return 7.0 / 3;
    } else if (65 <= att) {
        return 2;
    } else if (60 <= att) {
        return 5.0 / 3;
    } else if (55 <= att) {
        return 4.0 / 3;
    } else if (50 <= att) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n; cin >> n;

    vector<pair<pair<int, int>, int>> att;

    for (int i = 0; i < n; ++i) {
        int att1, att2, fin, cr; cin >> att1 >> att2 >> fin >> cr;

        att.push_back(make_pair(make_pair(att1 + att2, fin), cr));
    }

    double gpa_sum = 0;
    int cnt = 0;

    for_each(att.begin(), att.end(), [&gpa_sum, &cnt] (pair<pair<int, int>, int> at) {
        gpa_sum += compute_gpa(at.first) * at.second;
        cnt += at.second;
    });

    cout << gpa_sum / cnt << endl;
}
