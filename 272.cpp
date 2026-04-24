#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    bool flag = 0;
    while (getline(cin,str)){
        for(char c : str){
            if (c == '"' && !flag){
                cout << "``";
                flag = 1;
            }else if (c == '"' && flag){
                cout << "''";
                flag = 0;
            }else {
                cout << c;
            }
        }
        cout << '\n';
    }
}