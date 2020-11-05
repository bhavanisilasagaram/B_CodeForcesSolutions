#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    bool enc = false;
    int ans=0;
    int sumz=0;
    vector<int>v;
    for(int i=0;i<s.length();i++){
        if((s[i]-'0')==1){
            enc=true;
            ans+=sumz;
            if(ans>0){
                v.push_back(ans);
            }
            sumz=0;
            ans=0;
        }
        if(enc==true&&(s[i]-'0')==0){
            sumz++;
        }
    }
    int summ=a;
    for(auto el:v){
        if(el*b>a){
            summ+=(a);
        }
        else{
            summ+=(el*b);
        }
    }
    if(count(s.begin(),s.end(), '0')==s.length()){
        cout<<"0"<<endl;
    }

    else cout<<summ<<endl;
}
return 0;
}