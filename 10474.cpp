#include <bits/stdc++.h>
using namespace std;

int search(const vector<int>& v, int tar){
    int l = 0; int r = v.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = l + (r-l) / 2;
        if(v[mid] == tar){
            ans = mid;
            r--;
        }
        else if (v[mid] > tar) r = mid - 1;
        else l = mid + 1;
    }
    return (ans == -1) ? -1 : ans+1;
}
int main (){
    int n, q;
    int x = 0;
    while(cin >> n >> q){
        if(n == 0 && q == 0) break;
        x++;

        vector<int> v;
        while(n--){
            int num;
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());
        cout << "CASE# " << x << ":" << '\n';
        while(q--){
            int tar;
            cin >> tar;
            int f = search(v,tar);
            if(f == -1){
                cout << tar << " not found"<< '\n';
            }else {
                cout << tar << " found at " << f << '\n';
            }
        }
    }
}