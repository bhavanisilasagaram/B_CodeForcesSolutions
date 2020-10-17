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
    sort(a,a+num);
    ll maxprod=LONG_LONG_MIN;
    for(ll i=num-5;i<=num;i++){
        maxprod=max(maxprod,a[i%num]*a[(i+1)%num]*a[(i+2)%num]*a[(i+3)%num]*a[(i+4)%num]);
    }
    cout<<maxprod<<endl;
}
return 0;
}