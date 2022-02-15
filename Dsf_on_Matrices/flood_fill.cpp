#include<bits/stdc++.h>
using namespace std;
void dfs(int i,int j,int intcol,int newcol,vector<vector<int>>& image){
int n=image.size();
int m=image[0].size();
if(i<0||j<0) return;
if(i>=n||j>=m) return;
if(image[i][j]!=intcol) return;

image[i][j]=newcol;

dfs(i-1,j,intcol,newcol,image);
dfs(i+1,j,intcol,newcol,image);
dfs(i,j+1,intcol,newcol,image);
dfs(i,j-1,intcol,newcol,image);
    
}


 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int in=image[sr][sc];
        if(in!=newColor)
        dfs(sr,sc,in,newColor,image);
 }

 int main(){
     vector<vector<int>> v,m;
     int sr=1,sc=1,newColor=2;
     vector<int> v1,v2,v3;


     v.push_back(v1);
          v.push_back(v2);
     v.push_back(v3);

     m=floodFill(v,sr,sc,newColor);





 }
