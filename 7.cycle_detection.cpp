#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> g[N];
bool visited[N];
bool loop=false;
bool dfs(int vertex,int par){
    visited[vertex]=true;
    for(int child:g[vertex]){
        if(visited[child] && child==par) continue;
        if(visited[child]) return true;

        loop|=dfs(child,vertex);

    }
    return loop;
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
bool Gotloop=false;
for(int i=1;i<=n;i++){
if(visited[i]) continue;
if(dfs(i,0)){
    Gotloop=true;
break;

}

}
cout<<Gotloop<<endl;
}