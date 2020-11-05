#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num;
    cin>>num;
    int arr[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j==i||i==num-j-1){
                arr[i][j]=1;
            }
            else arr[i][j]=0;
        }
    }
    if(num%2==1){
        int k = num/2;
        arr[0][k]=1;
        arr[k][0]=1;
        arr[k][num-1]=1;
        arr[num-1][k]=1;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(arr[i][j]==1) cout<<arr[i][j]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
    
}
return 0;
}

