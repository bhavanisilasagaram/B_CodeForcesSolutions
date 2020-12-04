#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b;
cin>>a>>b;
if(b<=a){
    cout<<a-b<<endl;
}
else{
    int ans = 0;
    while(b>a){
        if(b%2){
            b++;
        }
        else{
            b/=2;
        }
        ans++;
    }
    cout<<ans+(a-b);
}
return 0;
}