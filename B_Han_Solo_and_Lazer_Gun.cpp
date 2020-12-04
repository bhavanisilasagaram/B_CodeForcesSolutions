#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
double n,x,y;
cin>>n>>x>>y;
int ans=0;
set<double>s;
set<int>inf;

for(int i=0;i<n;i++){
    double xx,yy;
    cin>>xx>>yy;

    double slope;
    if((xx-x)==0){
        inf.insert(1);

        continue;
    }
    slope = double(yy-y)/double(xx-x)*1.0;
    s.insert(slope);

}

cout<<s.size()+inf.size();

return 0;
}