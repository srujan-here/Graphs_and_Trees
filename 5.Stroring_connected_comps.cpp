#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<int> g[N];
bool visited[N];

vector<vector<int> > cc;
vector<int> cur_cc;

void dfs(int vertex){
    visited[vertex]=true;
    cur_cc.push_back(vertex);

   for(auto child:g[vertex]){
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
    int cont=0;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        cur_cc.clear();
        dfs(i);
        cc.push_back(cur_cc);
        cont++;
    }
    cout<<cont<<endl;
    cout<<cc.size()<<endl;
    for(vector<int> comp:cc){
        for(int elements:comp){
            cout<<elements<<" ";
        }cout<<endl;
    }

}