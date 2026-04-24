#include <bits/stdc++.h>
using namespace std;
int main (){
    string line;
    while(getline(cin, line)){
        stringstream ss(line);
        string token;
        int cont = 0;
        while (ss >> token){
            if(isalpha(token[0]))
            cont++;
        }
        cout << cont << '\n';
    }
}