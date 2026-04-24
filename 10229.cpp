#include<bits/stdc++.h>
using namespace std;
int N[INT_MAX];
int fib(int num){
    if(num == 0) return 0;
    else if (num == 1) return 1;
    else if(num == 2) return 1;
    else return N[num - 1] + N [num -2];
}

int two (int m){

}
int main(){
    for(int i = 0; i < INT_MAX; i++){
        N[i] = fib(i);
    }

}