#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> g[N];
int sub_sum[N];
int eve_cont[N];

void dfs(int vertex,int par=0){
    sub_sum[vertex]+=vertex;
    if(vertex%2==0){
        eve_cont[vertex]++;
    }

    for(auto child :g[vertex]){

        if(child==par) continue;
        dfs(child,vertex);
        sub_sum[vertex]+=sub_sum[child];
        eve_cont[vertex]+=eve_cont[child];

    }
}


int main(){
    int v;
    cin >> v;
    for(int i=0; i<v-1; i++){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);


    }
    dfs(1);
    int q;
    cin >> q;
    while(q--){
        int v1;
        cin >> v1;
        cout<<sub_sum[v1]<<" "<<eve_cont[v1]<<endl;
    }
}