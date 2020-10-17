#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num;
cin>>num;
ll sum=0;
vector< pair<ll,ll> >v;
ll a[num];
for(ll i=0;i<num;i++){
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+num);
for(ll i=2;i<10000;i++){
    ll p=abs(((pow(i,num)-1)/(i-1))-sum);
    v.push_back(make_pair(p,i));
}
sort(v.begin(),v.end());
ll summ=0;
for(ll i=0;i<num;i++){
    summ+=(abs(a[i]-pow(v[0].second,i)));
}
cout<<summ;

return 0;
}