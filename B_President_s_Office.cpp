#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int n,m;
char ch;
cin>>n>>m>>ch;
char a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        char ele;
        cin>>ele;
        a[i][j]=ele;
    }
}
set<char>s;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        //cout<<a[i][j]<<endl;
        if(a[i][j]==ch){
            if(i+1>=0&&i+1<n){
                if(a[i+1][j]!=ch&&a[i+1][j]!='.'){
                    s.insert(a[i+1][j]);
                    //cout<<a[i+1][j]<<endl;
                }
            }
            if(i-1>=0&&i-1<n){
                if(a[i-1][j]!=ch&&a[i-1][j]!='.'){
                    s.insert(a[i-1][j]);
                    //cout<<a[i-1][j]<<endl;
                }
            }
            if(j+1>=0&&j+1<m){
                if(a[i][j+1]!=ch&&a[i][j+1]!='.'){
                    s.insert(a[i][j+1]);
                    //cout<<a[i][j+1]<<endl;
                }
            }
            if(j-1>=0&&j-1<m&&a[i][j-1]!='.'){
                if(a[i][j-1]!=ch){
                    s.insert(a[i][j-1]);
                    //cout<<a[i][j-1]<<endl;
                }
            }
        }
    }
}
cout<<s.size()<<endl;
return 0;
}