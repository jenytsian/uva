#include <bits/stdc++.h>
using namespace std;

void diffsqu (vector<vector<char>> & small, int n){
    vector<vector<char>> temp = small;
    for (int i = 0; i < small.size(); i++){
        for (int j = 0; j < small.size(); j++){
            small[i][j] = temp[n - j - 1][i]; //w1
        }
    }
}
int main (){
    int N, n;
    while(cin >> N >> n){
        if (N == 0 && n == 0) break;
        vector<vector<char>> big (N, vector<char>(N));
        vector<vector<char>> small (n, vector<char>(n));
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> big[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> small[i][j];
            }
        }
        for (int k = 0; k < 4; k++){
            int sum = 0;
            for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){
                    if (big[i][j] == small[0][0]){
                        bool vaild = true;
                        for (int a = 0; a < n && vaild; a++){ //w2
                            for (int b = 0; b < n; b++){
                                if (i+n > N || j+n > N){
                                    vaild = false;
                                }else if (small[a][b] != big[i+a][j+b]){
                                    vaild = false;
                                }
                            }
                        }
                        if (vaild) {
                            sum++;
                        }
                    }
                }
            }
            diffsqu(small, n);
            if (k) cout << " ";
            cout << sum;
        }
        cout << '\n';
    }  
}