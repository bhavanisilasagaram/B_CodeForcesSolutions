#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    string num;cin>>num;
    int sum=0;
    vector<int>v;
    int fir=0;
    int sec=0;
    for(int i=0;i<num.length();i++){
        if(sum>0&&num[i]=='0'){
            v.push_back(sum);
            sum=0;
        }
        else if(num[i]=='1'){
            sum+=1;
        }
    }
    v.push_back(sum);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i%2==0)fir+=v[i];
        else sec+=v[i];
    }
    cout<<fir<<endl;

}
return 0;
}