#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;
cin>>str;
int summ=0;
for(int i=0;i<str.length();i++){
    summ+=(str[i]-'0');
}
int count=0;
if(str.length()<2){
    cout<<"0";
}
else if(summ<10){
    cout<<"1";
}
else{
    while(summ>=10){
        summ=0;
        for(int i=0;i<str.length();i++){
            summ+=(str[i]-'0');
        }
        count++;
        str=to_string(summ);
    }
    cout<<count;
}
return 0;
}