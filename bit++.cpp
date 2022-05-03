// https://codeforces.com/problemset/problem/282/A
//A. Bit++

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,X=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="X++"){
            X+=1;
        }
        else if(str=="++X"){
            X+=1;
        }
        else if(str=="X--"){
            X-=1;
        }
        else if(str=="--X"){
            X-=1;
        }
    }
    cout<<X;
    return 0;
}