//位元運算+ 矩陣
#include <iostream>
#include <vector>
using namespace std;

int nextstate(int s) {
    int res = 0;
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            int idx = r*3 + c;
            int sum = 0;
            // up
            if (r-1 >= 0) sum += (s >> ((r-1)*3 + c)) & 1;
            // down
            if (r+1 < 3)  sum += (s >> ((r+1)*3 + c)) & 1;
            // left
            if (c-1 >= 0) sum += (s >> (r*3 + (c-1))) & 1;
            // right
            if (c+1 < 3)  sum += (s >> (r*3 + (c+1))) & 1;
            int bit = sum % 2;
            if (bit) res |= (1 << idx);
        }
    }
    return res;
}

int main (){
    int N;
    while (N--){
       int init = 0;
        for (int r = 0; r < 3; r++){
            string line; cin >> line;
            for (int c = 0; c < 3; c++){
                if (line[c] == 1) {
                    init |= (1 << r*3 + 1);
                }
            }
        }
        vector<int> first (512,-1);
        int cur = init;
        int t = 0;
        while (first[cur] == -1){
            first[cur] = t;
            cur = nextstate(cur);
            t++;
        }
        int p = first[cur];
        if (p == 0) cout << -1 <<'\n';
        else cout << (p-1) << '\n';
    }
}