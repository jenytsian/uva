#include <bits/stdc++.h>
using namespace std;
char dex(char c){
    if (c == 'B' || c == 'F' || c == 'P' || c == 'V')
        return '1';

    if (c == 'C' || c == 'G' || c == 'J' || c == 'K' ||
        c == 'Q' || c == 'S' || c == 'X' || c == 'Z')
        return '2';

    if (c == 'D' || c == 'T')
        return '3';

    if (c == 'L')
        return '4';

    if (c == 'M' || c == 'N')
        return '5';

    if (c == 'R')
        return '6';
    
    return '0';
}
int main (){
    string s;
    while(cin >> s){
    char last ='0';
    string ans = "";

        for(char c: s){
            char num = dex(c);

            if(num == '0'){
                last = '0';
                continue;
            }

            if(last != num){
                ans += num;
                last = num;
            }
        }
         cout << ans << '\n';
    }
    return 0;
}
