#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        int ans = 0;
        int curry = 0;
        while(a != 0 || b != 0){
            int sum = a % 10 + b %10 + curry;
            if(sum > 9){
                ans++;
                curry = 1;
            }else{
                curry = 0;
            }
            a = a/10;
            b = b/10;
        }
        if(!ans){
            cout << "No carry operations." << '\n';
        }else if (ans == 1){
            cout << "1 carry operation." << '\n';
        }else {
            cout << ans << " carry operations." << '\n';
        }
    }
}