#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    while(cin >> n){
        map<string , int> counts;

        for(int i = 0; i < n; i++){
            string c, n;
            cin >> c;
            getline(cin, n);
            counts[c]++;
        }
        for(auto const& [a,b]: counts){
            cout << a << " " << b << '\n';
        }

    }
}

//for(auto const& [a,b]: counts){
