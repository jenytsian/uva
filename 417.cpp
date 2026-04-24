#include"bits/stdc++.h"
using namespace std;

int fac(int a){
    if (a == 0){
        return 0;
    }
    else if (a == 1){
        return 26;
    }else {
        return (fac(a - 1) - 1) * fac(a - 1);
    }
}

int lib(char c){
    return ((int) c - 96);
}

int main(){
    string str;
	while (getline(cin,str)){
        istringstream iss(str);
        char c;
        int max = 0;
        int x = 0; // how many times?
        int sum = 0;
        while (iss >> c){
            x++;
            if (lib(c) <= max){
                cout << '0' << "\n";
                break;
            }else{
                max = lib((int)c);
            }
            sum += (lib((int)c) + fac(x - 1));
            cout << lib((int)c) << " " << fac(x - 1) << "\n";
        }
    }
}

//判斷先後
//第幾次