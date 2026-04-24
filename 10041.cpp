#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    while(T--){
        int r; cin >> r;
        vector<int> arr(r,0);
        for(int i = 0; i < r; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int n = r/2;
        int sum = 0;
        for(int j = 0; j < r; j++){
            sum += abs(arr[n] - arr[j]);
        }
        cout << sum << '\n';
    }
}