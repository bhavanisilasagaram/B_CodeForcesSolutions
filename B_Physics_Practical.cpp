#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int num;
cin>>num;
vector<int>v;
for(int i=0;i<num;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
sort(v.begin(),v.end());//sort it
int maxx = INT_MAX;
for(int i=0;i<v.size();i++){
    int present = 2*v[i]+1;//get the 2*min value
    int frombak = v.end()-lower_bound(v.begin(),v.end(),present);//get the max value that WILL FIT WITH 2*MIN !
    maxx = min(maxx, i+frombak);//take the minimum over all the possible minimum values
}
cout<<maxx;
return 0;
}