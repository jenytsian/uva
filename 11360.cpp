#include <iostream>
#include <string>
#include<vector>
using namespace std;

void trans(vector<vector<int>> &arr){
    vector <vector<int>> temp = arr;
    for (int i = 1; i < arr.size(); i++){
        for (int j = 1; j < arr.size(); j++){
            arr[i][j] = temp[j][i];
        }
    }
}

void row(vector<vector<int>> &arr,int a,int b){
    swap(arr[a], arr[b]); // 這樣就結束了！
}

void col(vector<vector<int>> &arr, int a, int b){
    // vector <vector<int>> temp = arr; // 不需要
    for (int i = 1; i < arr.size(); i++){
        // arr[i][a] = temp [i][b];
        // arr[i][b] = temp [i][a];
        
        swap(arr[i][a], arr[i][b]);
    }
}

void inc(vector<vector<int>> &arr){
    for (int i = 1; i < arr.size(); i++){
        for (int j = 1; j < arr.size(); j++){
            arr[i][j]++;
            arr[i][j] = arr[i][j] % 10;
        }
    }
}

void dec(vector<vector<int>> &arr){
    for (int i = 1; i < arr.size(); i++){
        for (int j = 1; j < arr.size(); j++){
            arr[i][j]--;
            if (arr[i][j] == -1){
                arr[i][j] = 9;
            }
        }
    }
}

int main (){
    int T;
    cin >> T;
    for(int n = 1; n <= T; n++){
        int r;
        cin >> r;
        vector<vector<int>> arr(r+1, vector<int>(r+1));
        string str;
        for (int i = 1; i <= r; i++){
            cin >> str;
            for (int j = 0; j < str.length(); j++) {
                // 因為你是 1-based 索引，所以是 j+1
                arr[i][j+1] = str[j] - '0'; 
            }
        }

        int c; cin >> c;
        while (c--){
            string cmd;
            cin >> cmd;
            if (cmd == "transpose"){
                trans(arr);
            }else if (cmd == "row"){
                int a, b;
                cin >> a >> b;
                row(arr, a, b);
            }else if (cmd == "col"){
                int a, b;
                cin >> a >> b;
                col(arr, a, b);
            }else if (cmd == "inc"){
                inc(arr);
            }else if (cmd == "dec"){
                dec(arr);
            }
        }
        cout << "Case #" << n << '\n';
        for (int i = 1; i <= r; i++){
            for (int j = 1; j <= r; j++){
                cout << arr[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
}