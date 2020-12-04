#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;

int n,e;
cin>>n>>e;//inputting the nodes and edges
map< int, set <int> > adj;//for storing the adjency list

for(int i=0;i<e;i++){//going through all the connections
    int a,b;
    cin>>a>>b;//getting the source and the destination
    a--;//subtracting one to match the zero indexing
    b--;

    //UN-WEIGHTED UN-DIRECTED
    adj[a].insert(b);//inserting b in a
    adj[b].insert(a);//inserting a in b
}
//adjacency list is ready 
bool flag = true;//to keep iterating over all the nodes again and again
int ans=0;
while(flag==true){//untill there are no single element stuff left

    //going through all the nodes and checking 
    //if the number of adj nodes to a node is 1
    // if the number of adj nodes is one then delete that entry and delete that entry related
    //stuff from the different node
    //basically, delete all the conections

    set< pair <int, int> > pick;

    for(auto ele:adj){//putting all the single element stuff into a set of pairss
        if(ele.second.size()==1){
            flag = true;
            pick.insert(make_pair(ele.first, *ele.second.begin()));
        }
    }   
    if(pick.size()>0){//if that set has elements in it then remove all the connections from the sdjency list
        ans++;
        for(auto el:pick){
            adj[el.second].erase(el.first);
            adj[el.first].erase(el.second);

        }

    }
    else{//if there are o single element adjecencies we cant do anything else and we stop the loop 
        flag=false;
    }



}

cout<<ans<<endl;

return 0;
}