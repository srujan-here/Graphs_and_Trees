#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int> g[N];
bool visited[N];
void dfs(int vertex){

     visited[vertex]=true;
    for(int child:g[vertex]){
        if(visited[child])
        continue;
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
int cont=0;
for(int i=1;i<=n;++i){
    if(visited[i]) 
    continue;
    dfs(i);
    cont++;

}
cout<<cont<<endl;
}