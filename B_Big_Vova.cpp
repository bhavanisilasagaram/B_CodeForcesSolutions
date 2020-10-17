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
    int a[num];
    vector<int>v;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int presgcd=0;//taking a variable to store the present gcd like to check whats gereater among all the elements.
    pair<int,int>max;//making a pair of max which contains the a[i] and i for easy retreival and setting to -1
    int prv=0;//set the initial prv of the sequence to 0 as the gcd of any number with 0 is the number itself.
//we need to set num numbers and foe selecting each of those num numbers we need to go over the entire range of num numvers in the range
//hence the double for loop
    for(int i=0;i<num;i++){
        presgcd=0;
        //setting the variable presgcd to 0 for each time we are selecting a new element.
        for(int j=0;j<num;j++){
            //if(this number has not been utilised already then,)
            if(a[j]!=-1){
                //if(gcd of current number and previous gcd is greater than the gcd of any prev no and gcd then,)
                if(__gcd(a[j],prv)>presgcd){
                    //NOTE: these two will get overridden when there is a greater present gcd.
                    //set the present gcd to be curr
                    presgcd=__gcd(a[j],prv);
                    //and make a pair
                    max=make_pair(a[j],j);
                    
                }
               

            }
        }
        v.push_back(a[max.second]);
        
        prv=__gcd(prv,a[max.second]);
        a[max.second]=-1;
    }
    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
}
return 0;
}