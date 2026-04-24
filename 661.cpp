#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c;
    int t = 0;

    while (cin >> n >> m >> c) {
        if (n == 0 && m == 0 && c == 0) break;

        t++;
        vector<int> load(n + 1, 0);
        vector<int> state(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> load[i];
        }

        int sum = 0;
        int mx = 0;
        bool blown = false;

        while (m--) {
            int choice;
            cin >> choice;

            if (state[choice] == 0) {
                state[choice] = 1;
                sum += load[choice];
                mx = max(mx, sum);
                if (sum > c) blown = true;
            } else {
                state[choice] = 0;
                sum -= load[choice];
            }
        }

        cout << "Sequence " << t << '\n';
        if (blown) {
            cout << "Fuse was blown." << '\n';
        } else {
            cout << "Fuse was not blown." << '\n';
            cout << "Maximal power consumption was " << mx << " amperes." << '\n';
        }
        cout << '\n';
    }
}