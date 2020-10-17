#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
int flag=0;
for(int i=0;i<(t/2);i++){
    if(i%2==0){
        cout<<"aa";
        flag=0;
    }
    else{
        cout<<"bb";
        flag=1;
    }
}
if(flag==0&&t%2!=0){
    cout<<"b";
}
else if(flag==1&&t%2!=0){
    cout<<"a";
}


return 0;
}