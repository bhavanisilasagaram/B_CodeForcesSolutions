#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
ll fun(ll n){
    if(n<=0){
        return 0;
    }
    else{
        return n;
    }
}
int main() {
fastio;
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll sum=0;
ll prv = LONG_LONG_MAX;
for(ll i=n-1;i>=0;i--){
    ll m = min(a[i],fun(prv-1));
    sum+=m;
    prv=m;
}
cout<<sum;
return 0;
}