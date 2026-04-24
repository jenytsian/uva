#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main (){
    int N;
    while (cin >> N){
        if (N == 0) break;
        vector <vector<int>> arr (N, vector<int>(N));
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> arr[i][j];
            }
        }
        int flagx = 0; //都是偶數 // 1 的話 
        int x = -1;
        for (int i = 0; i < N; i++){
            int sum = 0;
            for (int j = 0; j < N; j++){
                sum += arr[i][j];
            }
            if (sum % 2){
               flagx++;
               x = ++i;
            }
        }
        int flagy = 0;
        int y = -1;
        for (int j = 0 ; j < N ; j++){
            int sum = 0;
            for (int i = 0; i < N; i++){
                sum += arr[i][j];
            }
            if (sum % 2){
                flagy++;
                y = ++j;
            }
        }
        if (flagx == 0 && flagy ==0){
            cout << "OK" << '\n';
        }else if (flagx == 1 && flagy == 1){
            cout << "Change bit (" << x << "," << y << ")"<< '\n';
        }else{
            cout << "Corrupt" <<'\n';
        }
    }
}