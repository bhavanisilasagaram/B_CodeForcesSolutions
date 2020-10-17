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
for(int i=0;i<num;i++){
    cin>>a[i];
}
int prv=0;
int maxdiff=0;
int sum=0;
for(int i=0;i<num;i++){
    int diff=prv-a[i];
    sum+=diff;
    maxdiff=max(maxdiff,abs(sum));
    prv=a[i];
}
cout<<maxdiff;
return 0;
}