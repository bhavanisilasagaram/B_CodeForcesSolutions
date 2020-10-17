#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll batches=(a+1)/2;
    ll size=(batches-1)/b*(b+c)+(batches%b?batches%b:b);
cout<<max(size,a)<<endl;
}
return 0;
}
