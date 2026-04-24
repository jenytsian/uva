#include <bits/stdc++.h>
using namespace std;
map <char, char> mp;

bool mirr(string s){
    int l = 0; int r = s.size() - 1;
    while(l < r){
        if(mp.find(s[l])== mp.end()) return false;
        if(mp[s[l]] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
bool reg(string s){
    int l = 0; int r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}
int main (){
    mp['A'] = 'A'; mp['E'] = '3'; mp['3'] = 'E';
    mp['H'] = 'H'; mp['I'] = 'I'; mp['J'] = 'L';
    mp['L'] = 'J'; mp['M'] = 'M'; mp['O'] = 'O';
    mp['S'] = '2'; mp['2'] = 'S'; mp['T'] = 'T';
    mp['U'] = 'U'; mp['V'] = 'V'; mp['W'] = 'W';
    mp['X'] = 'X'; mp['Y'] = 'Y'; mp['Z'] = '5';
    mp['5'] = 'Z'; mp['1'] = '1'; mp['8'] = '8';

    string s;
    while(cin >> s){
        bool a = reg(s);
        bool b = mirr(s);

        if(a && b){
            cout << s << " -- is a mirrored palindrome.\n";
        }else if(a){
            cout << s << " -- is a regular palindrome.\n";
        }else if(b){
            cout << s << " -- is a mirrored string.\n";
        }else{
            cout << s << " -- is not a palindrome.\n";
        }
        cout << '\n';
    }
}