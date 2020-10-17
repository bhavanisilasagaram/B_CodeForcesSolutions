#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
// i tried but i couldnt do it in the start but once i saw the editorial then i came up with the idea 
// actually someone told the idea that take them ans a<b; then see the frequency and all and everything else;
string a;
string b;
string c;
if(a[1]=='<'){
    reverse(a.begin(),a.end());
    a[1]='>';
}
if(a[1]=='<'){
    reverse(a.begin(),a.end());
    a[1]='>';
}
if(a[1]=='<'){
    reverse(a.begin(),a.end());
    a[1]='>';
}
return 0;
}