#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
vector<int> g[N];
int hei[N],dep[N];

void dfs(int vertex,int par=0){

    for(auto child:g[vertex]){

        if(child==par) continue;
        dep[child]=dep[vertex]+1;


        dfs(child,vertex);

        hei[vertex]=max(hei[vertex],hei[child]+1);
    }
}




int main(){
int n;
cin >> n;
for(int i=0;i<n-1;i++){
    int x,y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);

}
dfs(1);

for(int i=0;i<=n;i++){
    cout<<dep[i]<<" "<<hei[i]<<endl;
}
}