#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n; cin >> n;
    queue<string> q;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        if (x == 1) {
            string s; cin >> s;

            q.push(s);
        } else {
            q.pop();
        }

        cout << (q.empty() ? "queue is empty" : q.front()) << endl;
    }
}
