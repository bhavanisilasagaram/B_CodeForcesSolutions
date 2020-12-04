#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxcnt = INT_MAX;
    for(int maxx=1;maxx<=100;maxx++){
    int cnt = 0;
    int i=0;
    while(i<n){
        if(arr[i]!=maxx){
            cnt++;
            i+=k;
        }
        else{
            i+=1;
        }
    }
    maxcnt = min(maxcnt, cnt);
    }
    cout<<maxcnt<<endl;

}
return 0;
}