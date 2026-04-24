#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    while(getline(cin, s)){
        string word = "";
        for(char c : s){
            if(c != ' '){
                word += c;
            }else {
                reverse(word.begin(), word.end());
                cout << word << ' ';
                word = "";
            }
        }
        reverse(word.begin(), word.end());
        cout << word << '\n';
    }
}