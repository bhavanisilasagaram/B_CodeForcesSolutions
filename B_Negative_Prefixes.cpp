#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num;
    cin>>num;
    int a[num];
    int b[num];
    vector<int>v;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num;i++){
        cin>>b[i];
        if(b[i]==0){
            v.push_back(a[i]);
            a[i]=1e6;
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int j=0;
    for(int i=0;i<num;i++){
        if(a[i]==1e6){
            a[i]=v[j];
            j++;
        }
    }
    for(int i=0;i<num;i++)cout<<a[i]<<" ";
    cout<<endl;


}
return 0;
}