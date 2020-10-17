#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;cin>>num;
int a[num];
for(int i=0;i<num;i++){
    cin>>a[i];
}
int i=0;
int cnt=0;
while(i<num-2){
    if(a[i]==1&&a[i+1]==0&&a[i+2]==1){
        cnt++;
        i+=3;
    }
    else{
        i++;
    }

}
cout<<cnt;
return 0;
}