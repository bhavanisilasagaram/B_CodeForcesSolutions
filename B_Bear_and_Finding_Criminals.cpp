#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num,c;
cin>>num>>c;
int cnt=0;
int a[num];
for(int i=0;i<num;i++){
    cin>>a[i];
}
int maxdist=num;
for(int i=maxdist;i>=0;i++){
if(abs(c-maxdist)<num&&abs(c-maxdist)>=0){
    if(a[abs(c-maxdist)]==1&&a[abs(c+maxdist)]==1){
        cnt+=2;
    }
}
if(abs(c-maxdist)<num||abs(c-maxdist)>=0){
    if(a[abs(c-maxdist)]==1&&a[abs(c+maxdist)]==1){
        cnt+=1;
    }
}

}
cout<<cnt;
return 0;
}