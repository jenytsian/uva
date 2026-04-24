#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    while(cin >> s){
        int even = 0;
        int odd = 0;
        for(int i = 0; i < s.size(); i+=2){
            even += (s[i] - '0');
        }
        for(int i = 1; i < s.size(); i+=2){
            odd += (s[i] - '0');
        }
        if(abs(even - odd) % 11){
            cout << s << " is not a multiple of 11."<< '\n';
        }else {
            cout << s << " is a multiple of 11." << '\n';
        }
    }
}