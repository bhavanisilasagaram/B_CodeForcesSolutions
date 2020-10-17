#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int a[num];
map<int, int>m;
for(int i=0;i<num;i++){
    cin>>a[i];
    m[a[i]]=i;
}
int q;
cin>>q;
ll aa=0;
ll bb=0;
while(q--){
    int n;
    cin>>n;
    aa+=(m[n]+1);
    bb+=(num-m[n]);
}
cout<<aa<<" "<<bb;

return 0;
}