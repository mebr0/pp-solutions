#include<iostream>
#include<stack>

using namespace std;

// https://www.codespeedy.com/largest-rectangular-area-in-a-histogram-in-cpp
int main() {
    int n; cin >> n;
    int hist[n];

    for (int i = 0; i < n; ++i) cin >> hist[i];

    // if current height is bigger, append its index (consider it for calculating area)
    // when smaller one appear, calculate area for last element (as lowest height) till current one - 1
    // repear until current one will be greater than last element or stack is empty
    // save maximum value of area
    stack<int> s;
    int maxi = 0;

    int i = 0;
    while (i < n) {
        if (s.empty() || hist[s.top()] <= hist[i]) {
            s.push(i++);
            continue;
        }

        int last = s.top();
        s.pop();

        int area = hist[last] * (s.empty() ? i : i - s.top() - 1);

        if (area > maxi) {
            maxi = area;
        }
    }

    while (!s.empty()) {
        int last = s.top();
        s.pop();

        int area = hist[last] * (s.empty() ? n : n - s.top() - 1);

        if (area > maxi) {
            maxi = area;
        }
    }

    cout << maxi << endl;
}
