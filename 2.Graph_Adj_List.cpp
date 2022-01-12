#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+10;
vector<pair<int,int>> g[N]; 
int main(){
  int v,e;
  cin>>v>>e;                 //O(v+e) space complexity
  for(int i=0;i<e;i++){       //O(e) time complexity to find an element  
      int v1,v2,weight;
      cin>>v1>>v2>>weight;
      g[v1].push_back(make_pair(v2,weight));
      g[v2].push_back(make_pair(v1,weight));

  }


}