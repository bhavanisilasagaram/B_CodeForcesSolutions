#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    vector<ll>v;
    ll num;
    cin>>num;
    ll j=0;
    ll sum=0;
    for(ll i=1;i<10000000000;i+=pow(2,j)){
        sum+=(i*(i+1)/2);
        v.push_back(sum);
        j++;
    }
    ll it = upper_bound(v.begin(),v.end(),num)-v.begin();
    
    cout<<it;
    cout<<endl;
}
return 0;
}