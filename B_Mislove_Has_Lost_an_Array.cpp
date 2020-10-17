#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b,c;
cin>>a>>b>>c;
int left=a-b+pow(2,b)-1;
int right=pow(2,c)-1+pow(2,c-1)*(a-c);
cout<<left<<" "<<right;

return 0;
}