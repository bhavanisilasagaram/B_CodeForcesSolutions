#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll n;
cin>>n;
ll arr[n]={0};
ll k=0;
for(ll i=2;i<=sqrt(n);i++){
        for(ll j=i*2;j<=n;j+=i){
            if(arr[j]==0){
                arr[j]=1;
            }
        }
}


for(ll i=2;i<n;i++){
    if(arr[i]==0){
        sum+=i;
        if(sum<=n){
            if(arr[sum]==0){
                //cout<<sum<<" "<<endl;
                cnt++;
            }
        }
        
    }
}

cout<<cnt-1;
return 0;
}