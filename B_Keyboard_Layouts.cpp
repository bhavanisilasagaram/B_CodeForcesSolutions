#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;cin>>str;
string str1;cin>>str1;
string q;cin>>q;
map<char, char>m;
for(int i=0;i<str.size();i++){
    m[str[i]]=str1[i];
}
for(int j=0;j<q.size();j++){
    if((q[j] >= 97 && q[j] <= 122) || (q[j] >= 65 && q[j] <= 90)){
            if(isupper(q[j])){
                cout<<(char(toupper(m[tolower(q[j])])));
            }
            else cout<<m[q[j]];
    }
    else{
        cout<<q[j];
    }

}
return 0;
}