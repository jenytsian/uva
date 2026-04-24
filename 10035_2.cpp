#include <bits/stdc++.h>
using namespace std;
int main (){
    long long a = 0;
    long long b = 0;
    while(cin >> a >> b){
        int ans = 0;
        int carry = 0;
        while(a != 0 || b != 0){
            int sum = (a%10) + (b%10) + carry;
            if(sum >= 10){
                carry = 1; ans++;
            }else {
                carry = 0;
            }
            a = a/ 10; b = b/ 10;
        }
        if(ans == 0){
            cout << "No carry operation."<<'\n';
        }else if(ans == 1){
            cout << "1 carry operation." <<'\n';
        }else{
            cout << ans << " carry operations."<<'\n';
        }
    }
}