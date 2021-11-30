#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

struct point {
    int x;
    int y;
};

struct coord_system {
    point origin;
    vector<point> points;

    void add(point p) {
        points.push_back(p);
    }

    // calculate distance from origin to p
    double dist(point p) {
        int dx = origin.x - p.x;
        int dy = origin.y - p.y;

        return sqrt(dx * dx + dy * dy);
    }

    // sort points according to distance from origin
    void sort_around_origin() {
        sort(points.begin(), points.end(), [&] (point &a, point &b) {
            return dist(a) < dist(b);
        });
    }

    vector<point> get() {
        return points;
    }
};

int main() {
    int x, y; cin >> x >> y;
    
    point origin;
    origin.x = x;
    origin.y = y;

    coord_system system;
    system.origin = origin;

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int x_i, y_i; cin >> x_i >> y_i;

        point p;
        p.x = x_i;
        p.y = y_i;

        system.add(p);
    }

    system.sort_around_origin();

    vector<point> pts = system.get();

    for (auto p: pts) {
        cout << p.x << ' ' << p.y << endl;
    }
}
