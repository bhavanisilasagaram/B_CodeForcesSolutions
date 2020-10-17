#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
ll pos(ll ele){
    ll cnt=0;
    while(ele>0){
        ll bit = ele%2;
        ele/=2;
        cnt++;
    }
    return cnt;
}
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll num;
    cin>>num;
    map<ll,ll>m;
    for(ll i=0;i<num;i++){
        ll ele;
        cin>>ele;
        m[pos(ele)]++;
    }
    ll sum=0;
    for(auto ele:m){
        ele.second--;
        sum+=((ele.second)*(ele.second+1))/2;
    }
    cout<<sum<<endl;
}
return 0;
}