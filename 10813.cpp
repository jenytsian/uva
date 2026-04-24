#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T;
    cin >> T;
    while (T--){
        vector<vector<int>> grid (5, vector<int>(5, 0));
        vector<int> row(5, 0);
        vector<int> col (5,0);
        int ra = 1; int re = 1;
        row[2] = 1; col[2] = 1;
        for (int i = 0; i < 5; i++){
            if (i == 2){
                cin >> grid[2][0];
                cin >> grid[2][1];
                cin >> grid[2][3];
                cin >> grid[2][4];
            }else{
                for (int j = 0; j < 5; j++){
                    cin >> grid[i][j];
                }
            }
        }
        bool find = 0;
        int cou = 0;
        for (int i = 1; i <= 75; i++){
            int x;
            cin >> x;
            if (find == 1) continue;
            cou++;
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    if (grid[i][j] == x){
                        row [i]++;
                        col [j]++;
                        if (i == j){
                            ra++;
                        }
                        if (i + j == 4){
                            re++;
                        }
                        bool flag1 = 0; bool flag2 = 0;
                        for (int c = 0; c < 5; c++){
                            if (row[c] == 5) flag1 = 1;
                            if (col[c] == 5) flag2 = 1;
                        }
                        if (ra == 5 || re == 5 || flag1 || flag2){
                            if (!find) {
                                cout << "BINGO after "<< cou <<" numbers announced"<< "\n";
                            }
                            find = 1;
                        }
                    }
                }
            }
        }
    }
}