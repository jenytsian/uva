#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    int arr[5][5];
    int num = 0;
    int x, y;
    while (cin >> str && str != "z"){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                arr[i][j] = str[j];
                if (arr[i][j] = ' '){
                    x = i;
                    y = j;
                }
            }
        }
        string cmd;
        while (getline (cin,cmd)){
            num++;
            bool flag = 0;
            for (char c: cmd){
                    char att;
                if (c == '0') break;
                if (c == 'A'){
                    if (y == 0)  flag = 1;
                    att = arr[x][y - 1];
                    arr[x][y - 1] = ' ';
                    arr[x][y] = att;
                }else if (c == 'R'){
                    if (x == 4) flag = 1;
                    att = arr[x+1][y];
                    arr[x+1][y] = ' ';
                    arr[x][y] = att;
                }else if (c == 'B'){
                    if (y == 4) flag = 1;
                    att = arr[x][y+1];
                    arr[x][y+1] = ' ';
                    arr[x][y] = att;
                }else if (c == 'L'){
                    if (x == 0) flag = 1;
                    att = arr[x-1][y];
                    arr[x-1][y] = ' ';
                    arr[x][y] = att;
                }
            }
            cout << "Puzzle #" << num << ":";
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    if(j != 0){
                        cout << " ";
                    }
                    cout << arr[i][j] << " ";
                }
                cout << '\n';
            }
        }
    }
}
