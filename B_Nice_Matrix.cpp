#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll sum=0;
    ll avg;
    for(ll i=0;i<n/2;i++){
        for(ll j=0;j<m/2;j++){
            //cout<<a[i][j]<<" "<<a[n-i-1][j]<<endl;
            //cout<<a[i][m-j-1]<<" "<<a[n-i-1][m-j-1]<<endl;
            avg=(a[i][j]+a[n-i-1][j]+a[i][m-j-1]+a[n-i-1][m-j-1])/4;
            //cout<<"avg is "<<avg<<endl;
            int r[4];
            r[0]=a[i][j];r[1]=a[n-i-1][j];r[2]=a[i][m-j-1];r[3]=a[n-i-1][m-j-1];
            sort(r,r+4);
            avg=(r[1]+r[2])/2;
            sum+=(abs(a[i][j]-avg)+abs(a[n-i-1][j]-avg)+abs(a[i][m-j-1]-avg)+abs(a[n-i-1][m-j-1]-avg));
        }
        //cout<<sum<<"sum "<<endl;
        //cout<<endl;
    }
    if(n%2==1){
        for(ll i=0;i<m/2;i++){
            avg=min(a[n/2][i], a[n/2][m-i-1]);
            sum+=(abs(avg-a[n/2][i])+abs(avg-a[n/2][m-i-1]));
        }
        //if(m%2==1){
          //  sum+=a[n/2][m/2];
        //}
    }
    if(m%2==1){        
        for(ll i=0;i<n/2;i++){
            int avgg=min(a[i][m/2], a[n-i-1][m/2]);
            sum+=(abs(avgg-a[i][m/2])+abs(avgg-a[n-i-1][m/2]));
        }
        //if(n%2==1){iio
         //   sum+=a[n/2][m/2];
        //}
    }
    cout<<sum<<endl;

}
return 0;
}