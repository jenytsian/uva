#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    while(getline(cin,s)){
        bool one = false;
        int ans = 0;
        for(char c: s){
            if(isalpha(c)){
                if(!one){
                    one = true;
                }
            }else{
                if(one){
                    ans++;
                    one = false;
                }
            }
        }
        if(one) ans++;
        cout << ans<< '\n';
    }
}