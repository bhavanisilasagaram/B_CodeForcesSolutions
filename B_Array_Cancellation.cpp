#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll num;
    cin>>num;
    ll a[num];
    for(ll i=0;i<num;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=0;i<num;i++){
        if(sum<0){
            sum=0;
        }
        sum+=a[i];
    }
    cout<<sum<<endl;
}
return 0;
}