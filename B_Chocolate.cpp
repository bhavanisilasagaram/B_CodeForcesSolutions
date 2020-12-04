#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int s[num];
for(int i=0;i<num;i++){
    cin>>s[i];
}
ll ans=1;
ll one=0;
ll sum = 0;
bool start = false;
for(int i=0;i<num;i++){
    if(s[i]==1){
        start = true;
        one++;
        if(sum>0){
            ans*=(sum+1);
        }
        sum=0;
    }
    if(s[i]==0&&start==true){
        sum++;
    }
}
if(one==1){
    cout<<"1";
}
else if(one==0){
    cout<<"0";
}
else{
    cout<<ans;
}
return 0;
}