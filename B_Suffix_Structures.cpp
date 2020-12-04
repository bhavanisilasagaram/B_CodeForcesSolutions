#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string s,t;
cin>>s>>t;
map<int, int>ms,mt;
bool flag = false;
bool flagg = false;
for(int i=0;i<s.length();i++){
    ms[s[i]-'a']++;
}
for(int i=0;i<t.length();i++){
    mt[t[i]-'a']++;
}
for(auto ele:mt){
    if(ele.second>ms[ele.first]){
        flag = true;
    }
}
int j=0;

for(int i=0;i<s.length();i++){
   if(s[i]==t[j]){
       j++;
    }
}
//cout<<j;
if(j==t.length()){
    cout<<"automaton";
}
else if(ms==mt){
    cout<<"array";
}
else if(flag==false){
    cout<<"both";
}
else{
    cout<<"need tree";
}
return 0;
}