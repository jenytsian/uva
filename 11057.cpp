#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    int num = n;
    while(num--){
        int x; cin >> x;
        v.push_back(x);
    }
    sort (v.begin(), v.end());
    int x; cin >> x;
    int l = 0; int r = n - 1;
    int min = x; int ans_a = -1; int ans_b = -1;
    while(l < r){
        int sum = v[l] + v[r];
        if(sum > x){
            r--;
        }else if (sum < x){
            l++;
        }else if(sum == x){
            int n = v[r] - v[l];
            if(n < min){
                min = n;
                ans_a = v[l];
                ans_b = v[r]; 
            }
            l++; r--;
        }
    }
    cout << "Peter should buy books whose prices are " << ans_a << " and " << ans_b<< '\n';
}
// 2 4 6 8 10