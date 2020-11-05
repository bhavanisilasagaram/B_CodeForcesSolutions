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
    string n;
    cin>>n;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<num-1;i++){
        if(n[i]=='1'&&n[i+1]=='1'){
            cnta++;
        }
    }
    for(int i=0;i<num-1;i++){
        if(n[i]=='0'&&n[i+1]=='0'){
            cntb++;
        }
    }
    cout<<max(cnta,cntb)<<endl;
}
return 0;
}