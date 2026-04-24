#include <bits/stdc++.h>
using namespace std;
int main(){
    bool flag = false;
    string s;
    while(getline(cin,s)){
        for(int i = 0; i < s.size();i++){
            if(s[i] == '"'){
                if(flag){
                    cout << "''" << '\n';
                }else{
                    cout << "``" << '\n';
                }
            }else{
                cout << s[i];
            }
            cout << '\n';
        }
    }
}