#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
string str;cin>>str;
vector<char>v;
for(int i=0;i<str.size();i+=2){
    v.push_back(str[i]);
}
vector<char>v1;
for(int j=1;j<str.length();j+=2){
    v1.push_back(str[j]);
}
if(t%2!=0){
    reverse(v1.begin(),v1.end());
    for(auto ch:v1){
        cout<<ch;
    }
    for(auto cha:v){
        cout<<cha;
    }
}
else{
    reverse(v.begin(),v.end());
    for(auto cha:v){
        cout<<cha;
    }
    for(auto ch:v1){
        cout<<ch;
    }
}
return 0;
}