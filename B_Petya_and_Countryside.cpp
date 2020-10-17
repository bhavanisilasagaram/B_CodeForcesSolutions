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
int cnt=0;
int maxcnt=0;
for(int i=0;i<num;i++)cin>>a[i];
//O(n) is not working failing at test case 61 :(
//doing the brute force solution 
//for every number we are gonna check how many areas it can water and then print the maximum one
int prv;
prv=a[0];
for(int i=0;i<num;i++){
    if(a[i]<=prv){
        cnt++;
        prv=a[i];
    }
    else{
        break;
    }
}
maxcnt=cnt;
 for(int i=1;i<num;i++){
     cnt=0;
     int prv=a[i];
     for(int j=i-1;j>=0;j--){
         if(a[j]<=prv){
             cnt++;
             prv=a[j];
         }
         else{
             break;
         }
     }
     int prvv=a[i];
     for(int k=i+1;k<num;k++){
         if(a[k]<=prvv){
             cnt++;
             prvv=a[k];
         }
         else{
             break;
         }
     }
     cnt++;
     maxcnt=max(maxcnt,cnt);
 }
cout<<maxcnt; 
return 0;
}