#include <bits/stdc++.h>
using namespace std;
bool e (string s){
    string n = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])) n += tolower(s[i]);
    }
    int l = 0; int r =  n.length() - 1;
    while(l < r){
        if(n[l] != n[r]) return false;
        else {
            l++; r--;
        }
    }
    return true;
}
int main(){
    string s;
    while(getline(cin ,s)){
        if(s == "DONE") break;
        if(e(s)) cout << "You won't  be eaten" << '\n';
        else cout << "Uh oh.." << '\n';
    }
}