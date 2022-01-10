#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int g[N][N];          //O(n*n)-space complexity(drawback)
#define ll long long
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1][v2]=1;
        g[v2][v1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<g[i][j]<<" ";
        }cout<<endl;
    }
}