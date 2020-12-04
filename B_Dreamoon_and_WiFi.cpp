#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string input;
string output;
cin>>input>>output;
int sum = 0;
for(int i=0;i<input.length();i++){
    if(input[i]=='+'){
        sum++;
    }
    else{
        sum--;
    }
}
int xsum=0;
int qm = 0;
for(int i=0;i<output.length();i++){
    if(output[i]=='+'){
        xsum++;
    }
    else if(output[i]=='-'){
        xsum--;
    }
    else{
        qm++;
    }
}

int rem = sum - xsum;
int tot = 0;
if(qm>0){
    tot = 2*qm;
}
if(qm == 0){
    if(sum == xsum){
        cout<<"1.000000000000";
    }
    else{
        cout<<"0.000000000000";
    }
    break;
}


return 0;
}