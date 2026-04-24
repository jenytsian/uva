#include <bits/stdc++.h>
using namespace std;
int solve (int i, int &s){
    if(i == 1){
        return s;
    }else if (i%2){
        s++;
        return solve(3*i+1,s);
    }else{
        s++;
        return solve(i/2,s);
    }
}
int main(){
    int a, b;

    while(cin >> a >> b){
        int x = a; int y = b;
        int max = 0;
        if(a > b) swap(a,b);
        for(int i = a; i <= b; i++){
            int s = 1;
            int step = solve (i, s);
            if(max < step) max = step;
        }
        cout << x << " " << y << " " << max << '\n';
    }
}
