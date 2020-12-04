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
    int ind=-1;
    
    map<int, pair<int, int>>m;
    for(int i=0;i<num;i++){
        int ele;
        cin>>ele;
    
        m[ele].first++;
        m[ele].second= i;
    }
    int minn = INT_MAX;

    for(auto it:m){
        
        if(it.second.first==1){
            if(it.first<minn){
                ind = it.second.second+1;
                minn=it.first;
            }
        }
    }
    cout<<ind<<endl;
    
}
return 0;
}