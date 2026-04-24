#include <bits/stdc++.h>
using namespace std;
int main (){
    int T; cin >> T;
    while(T--){
        int N;
        cin >> N;
        int P;
        cin >> P;
        vector<int> v(N, 0);
        for(int i = 0; i < P; i++){
            int fre = 0; cin >> fre;
            for(int j = fre - 1; j < N; j+= fre){
                v[j] = 1;
            }
        }
        int ans = 0;
        for(int i = 0; i < N; i++){
            if(v[i] == 1 && (i % 7 != 5) && (i % 7 != 6)){
                ans++;
            }
        }
        cout <<  ans << '\n';
    }
}