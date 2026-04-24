#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans[10] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7};

    string n;
    while (cin >> n) {
        if (n == "0") break;
        int last = n.back() - '0';
        cout << ans[last] << '\n';
    }

    return 0;
}