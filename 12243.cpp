#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    while (getline (cin, str)){
        if(str == "*") break;
        istringstream iss(str);
        string token;
        bool flag = true;
        char c = '0';
        while (iss >> token && flag){
            if (c != '0') {
                if(tolower(token[0]) != c) flag = false;
            }else {
                c = tolower(token[0]);
            }
        }
        if(flag) cout << 'Y' << '\n';
        else cout << 'N' << '\n';
    }
}