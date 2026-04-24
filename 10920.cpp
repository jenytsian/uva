#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        ll SZ, P;
        cin >> SZ >> P;
        if (SZ == 0 && P == 0) break;

        ll center = (SZ + 1) / 2;
        if (P == 1) {
            cout << "Line = " << center << ", column = " << center << ".\n";
            continue;
        }

        ll layer = 0;
        while ((2*layer + 1) * (2*layer + 1) < P) layer++;
        ll s = 2*layer + 1;
        ll maxNum = s * s;
        ll diff = maxNum - P;
        ll side = s - 1;

        ll line, column;
        if (diff < s) {
            line = center + layer - diff;
            column = center + layer;
        } else if (diff < s + side) {
            ll d = diff - side;
            line = center - layer;
            column = center + layer - d;
        } else if (diff < s + 2*side) {
            ll d = diff - 2*side;
            line = center - layer + d;
            column = center - layer;
        } else {
            ll d = diff - 3*side;
            line = center + layer;
            column = center - layer + d;
        }

        cout << "Line = " << line << ", column = " << column << ".\n";
    }
}
