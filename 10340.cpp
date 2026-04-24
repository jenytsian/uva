#include <bits/stdc++.h>
using namespace std;
bool  same (string &s, string &t){
    int i =  0;
    for(char c: t){
        if(i < (int)s.size() && s[i] == c){
            i++;
        }
    }
    return i == (int)s.size();
}
int main (){
    string s, t;
    while(cin >> s >> t){
        cout << (same(s,t) ? "Yes" : "No") << '\n';
    }
}