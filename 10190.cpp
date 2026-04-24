#include <bits/stdc++.h>
using namespace std;
bool pa(int a, int b, vector<int>&arr){
    while(a > 1){
        if(a % b) return false;
        else {
            a = a / b;
            arr.push_back(a);
        }
    }
    for(auto i : arr){
        if(i != 1 && i % b != 0) return false;
    }
    return true;
}
int main (){
    int a, b;
    while(cin >> a >> b){
        vector<int> arr;
        arr.push_back(a);
        if (pa(a,b,arr)){
            for(int i = 0; i < arr.size(); i++){
                if(i) cout << ' ';
                cout << arr[i];
            }
        }else{
            cout << "Boring!" << "\n";
        }
    }
}