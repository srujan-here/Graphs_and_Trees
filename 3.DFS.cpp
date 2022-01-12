#include<bits/stdc++.h>
using namespace std;
#define ll long long;
const int N=1e3+10;
vector<int> g[N];
bool visited[N];

void dfs(int vertex){
    // if(visited[vertex]) 
    // return;
    cout<<vertex<<endl;
    visited[vertex]=true;
    for(int child:g[vertex]){
        cout<<" par "<<vertex<<" child "<<child<<endl;
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    dfs(1);
}

//Time Complexity for DFS:O(vertices+edges)