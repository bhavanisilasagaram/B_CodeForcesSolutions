#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int arr[num];
map<int, vector<int> >m;
for(int i=0;i<num;i++){
    cin>>arr[i];
    m[arr[i]].push_back(i);
}
vector < pair<int, int> > vv;
for(auto it:m){
    bool flag = true;
    
    vector <int> v = it.second;
    if(v.size()==1){
        //cout<<it.first<<" 0"<<endl;
        vv.push_back(make_pair(it.first, 0));
        continue;
    }
    int d = v[1]-v[0];
    for(int i = 1; i< v.size();i++){
        if(v[i]-v[i-1]!=d){
            flag = false;
            break;
        }
        
    }
    if(flag == true){
        vv.push_back(make_pair(it.first, d));
    }
    
    
}
if(vv.size()>0){
    cout<<vv.size()<<endl;
    for(auto el:vv){
        cout<<el.first<<" "<<el.second<<endl;
    }
}
else{
    cout<<"0"<<endl;
}

return 0;
}