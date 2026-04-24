#include <bits/stdc++.h>
using namespace std;
int solve (long long a, long long b){
    int ans = 0;
    int re = 0;
    while (a || b){
        if ((a % 10 + b % 10 + re) >= 10){
            re = 1;
            ans++;
        }else {
            re = 0;
        }
        a = a/ 10; b = b/ 10;
    }
    return ans;
}
int main (){
    long long a, b;
    while (cin >> a >> b){
        int c = solve(a, b);
        if (c == 0) {
            cout << "No carry operation.\n";
        } else if (c == 1) {
            cout << "1 carry operation.\n";
        } else {
            cout << c << " carry operations.\n";
        }
    }
}