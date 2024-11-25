//Graph Revision

/***************************
*
*
*
*
*
*
*
*****************************/

#include<bits/stdc++.h>

using namespace std;

void bfs(int src, map<int,bool> &visited){
    queue<int> q;

    q.push(src);

    visited[src]=true;

    while(!q.empty()){
        int front = q.front();
        cout<< front<<" ";
        q.pop();
        for(auto neighbour : adjlist[front]){
            if(!visted[neighbour]){
                q.push(neighbour);
                visted[neighbour]=true;
            }
        }
    }
}


Example:


//bfs in matrix 


int shortestpath(vector<vector<int>> &grid){
    queue<pair<pair<int,int>,int>> q;
   ////push the first coocrdinate =
    q.push({{0,0},1});
    vector<vector<bool>>visited(grid.size(),vector<bool>(grid.size(),false));

    if(grid[0][0]==1) return -1;

    if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1)  return 1;

   
    visited[0][0]=true;
    while(!q.empty())
    {
        pair<int,int> p = q.front().first;

        int x= p.first;
        int y=p.second;
        int lengthofPath=q.front().second;
        q.pop();
        vector<pair<int,int>> neighbours = {{}};

        for(pair<int,int> neighbour: neighbours)
        {
            int m=neighbours.first + x;
            int n = neighbours.second + y;



            if( m>=0  && n)
        }

    }
}