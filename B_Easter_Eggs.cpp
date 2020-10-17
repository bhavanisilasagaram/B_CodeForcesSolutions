#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin >>num;
string s="VIBGYOR";
string g="GYOR";
if(num<7){
    for(int i=0;i<(num%7);i++){
        cout<<s[i];
    }
}
else{
    cout<<s;
    for(int i=0;i<(num-7)/4;i++){
        cout<<"GYOR";
    }
    for(int j=0;j<(num-7)%4;j++){
        cout<<g[j];
    }
}

return 0;
}