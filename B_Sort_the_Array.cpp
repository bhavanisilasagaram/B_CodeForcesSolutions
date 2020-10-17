#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll n;
cin>>n;
vector<ll>v;
vector<ll>r;
for(ll i=0;i<n;i++){
    ll ele;
    cin>>ele;
    v.push_back(ele);
    r.push_back(ele);
}
sort(r.begin(),r.end());
if(r==v){
    cout<<"yes"<<endl;
    cout<<"1 1"<<endl;
}
else{
    ll start=(-1);
    ll end=(-1);
    ll cnt=0;
    bool decr=false;
    ll prv=v[0];
    for(ll i=1;i<n;i++){
        if(prv>v[i]){
            if(decr==false) start=i;
            decr=true;
        }
        else if(decr==true&&prv<v[i]){
            end=i;
            decr=false;
            cnt++;
        }
        prv=v[i];
    }
    if(decr==true){
        cnt+=1;
        end=(n);//cnt==1&&((v[start-1]<v[end]||(end==n&&((v[end-1]>v[start-1])||(start==1)))))
    }
    if((cnt==1)&&(((v[start-1]<v[end]))||((end==n)&&(start==1||(v[end-1]>v[start-2]))))){

        cout<<"yes"<<endl;
        cout<<start<<" "<<end;
    }
    else{
        cout<<"no"<<endl;
        //cout<<cnt<<endl;
        //cout<<start<<" "<<end<<endl;
    }
}
return 0;
}