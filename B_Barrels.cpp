#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    ll arr[a];
    for(ll i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    reverse(arr,arr+a);
    ll sum=0;
    for(ll i=0;i<b+1;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
 
}
return 0;
}