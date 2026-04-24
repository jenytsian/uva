#include <bits/stdc++.h>
using namespace std;
string make_key(string w){
    for(char &c : w) c = (char)tolower((unsigned char)c);
    sort(w.begin(), w.end());
    return w;
}
int main (){
    vector<string> words;
    vector<string> keys;
    unordered_map<string, int> m;
    string token;
    while(cin >> token && token != "#"){
        words.push_back(token);
        string x = make_key(token);
        keys.push_back(x);
        m[x]++;
    }
    vector<string> ans;
    for(int i = 0; i < (int)words.size(); i++){
        if((m[keys[i]]) == 1) ans.push_back(words[i]);
    }

    sort(ans.begin(), ans.end());
    for(auto &x : ans) cout << x << '\n';
    return 0;
}