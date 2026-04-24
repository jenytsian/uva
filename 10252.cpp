#include <bits/stdc++.h>
using namespace std;
int main (){
    string s1;
    string s2;
    while (getline(cin,s1) && getline(cin,s2)){
        int p1[26] = {};
        int p2[26] = {};
        for (int i = 0; i < s1.length(); i++){
            p1[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++){
            p2[s2[i] - 'a']++;
        }
        for (int i = 0 ;  i < 26; i++){
            for(int j = 0 ; j < min(p1[i], p2[i]); j++){
                cout << (char)('a' + i);
            }
        }
        cout << "\n";
    }
}