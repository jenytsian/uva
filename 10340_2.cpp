#include <bits/stdc++.h>
using namespace std;
bool solve (string s, string t){
    int s_idx = 0;
    int t_idx = 0;
    while(s_idx != s.size() && t_idx != t.size()){
        if(tolower(s[s_idx]) == tolower(t[t_idx])){
            s_idx++; t_idx++;
        }else{
            t_idx++;
        }
    }
    if(s_idx == s.size()){
        return true;
    }else{
        return false;
    }
}
int main(){
    string s;
    string t;
    while(cin >> s >> t){
        if(solve(s, t)){
            cout << "Yes" << '\n';
        }else {
            cout << "No" << '\n';
        }
    }
}