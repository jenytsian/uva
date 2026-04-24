#include <bits/stdc++.h>
using namespace std;

int dr[8] = {0, 0, -1, 1, 1, 1, -1, -1};
int dc[8] = {-1, 1, 0, 0, 1, -1, -1, 1};

int main (){
    int t = 0;
    int a, b;
    while (cin >> a >> b){
        t++;
        if (a == 0 || b == 0){
            break;
        }
        vector <vector<int>> arr(a, vector<int>(b,0));
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                char c;
                cin >> c;
                if (c == '*'){
                    arr[i][j] = -1;
                    for (int k = 0; k < 8; k++){
                        int nx = i + dr[k];
                        int ny = j + dc[k];
                        if (nx >= 0 && nx < a && ny >= 0 && ny < b && arr[nx][ny] != -1){
                            arr[nx][ny]++;
                            //cout << "nx, ny = "<< nx << ny;
                        }
                    }
                }
            }
        }
        if (t > 1) cout << '\n';
        cout << "Field #" << t << ":\n";
        for (auto &row : arr){
            for (auto &val : row){
                if (val == -1){
                    cout << "*";
                }else {
                    cout << val;
                }
            }
            cout << '\n';
        }
    }
}