#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    while(cin >> T){
        if(T == 0) break;
        map<pair<int, int>, int> mp;
        int a, b;
        for(int i = 0; i < T; i++){
            cin >> a >> b;
            mp[{a, b}]++;
        }

        bool ok = true;

        for(auto &[p, c]: mp){
            if(mp[{p.second, p.first}] != c){
                ok = false;
            }
        }

        if(ok) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}
