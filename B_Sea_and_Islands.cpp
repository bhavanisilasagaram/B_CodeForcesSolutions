#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll n,k;
cin>>n>>k;
ll max;ll ans;
if(n%2==1){
    max = (n+1)/2;
    ans = max*max + (max-1)*(max-1);
}
else{
    max = n/2;
    ans = n/2*n;
}
//cout<<ans<<" is ans "<<endl;
if(k>ans){
    cout<<"NO";
    return 0;
}
cout<<"YES"<<endl;
char arr[n][n];
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if((i%2==0&&j%2==0&&k)||(i%2==1&&j%2==1&&k)){
            arr[i][j]='L';
            k--;
        }
        else{
            arr[i][j]='S';
        }
        cout<<arr[i][j];
    }cout<<endl;
}
return 0;
}