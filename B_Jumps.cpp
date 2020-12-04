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
    int sum = 0;
    int i=0;
    while(sum<num){
        i+=1;
        sum+=i;
        
    }
    if(sum-1==num){
        cout<<i+1<<endl;
    }
    else cout<<i<<endl;
    
    
}
return 0;
}