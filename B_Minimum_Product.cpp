#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll pa=a;ll pb=b;ll kb=b;ll ka=a;
        ll bb=max(y,b-n);
        if(b-bb<n) pa-=min(pa-x,(n-(b-bb)));
        pb=bb;

        ll aa=max(x,a-n);
        if(a-aa<n) kb-=min(kb-y,(n-(a-aa)));
        ka=aa;
    cout<<min(pb*pa,ka*kb)<<endl;
}
return 0;
}
//kb-=(n-(a-aa));