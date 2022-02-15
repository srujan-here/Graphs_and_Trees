// @leetcode -> https://leetcode.com/problems/number-of-islands/


#include<bits/stdc++.h>
using namespace std;
const int N=1e10+7;
void dfs(int i,int j,int row,int col,vector<vector<char>>& grid){
if(i<0||j<0) return;
if(i>=row||j>=col) return;

if(grid[i][j]=='1'){
    grid[i][j]='0';
dfs(i,j+1,row,col,grid);
dfs(i,j-1,row,col,grid);
dfs(i+1,j,row,col,grid);
dfs(i-1,j+1,row,col,grid);
}



}


 int numIslands(vector<vector<char>>& grid) {
     int row=grid.size();
     int col=grid[0].size();
     int tem=0;
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
             if(grid[i][j]=='1'){
                 grid[i][j]='0';
                 tem++;
                 dfs(i,j,row,col,grid);
             }
         }
     }
     return tem;
 }


 int main(){
     //give ur character matrix
 }