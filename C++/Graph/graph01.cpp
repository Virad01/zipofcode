/*   

*/
//Creation of  graph using adjancey list (directed Graph)
#include<bits/stdc++.h>

using namespace std;
class Graph{
    public:
    map<int,list<int>>adjlist;

    void addedge(int u,int v,bool direction){
        //direction 0= undirected graph
        //direction 1= directed graph


        //for u->v

        adjlist[u].push_back(v);
        if(direction==0){
            adjList[u].push_back(u);
        }
    }

    void printad(){
        for count i:adjlist;
        
    }
}
int main(){



}  

//breadth first search;

#include<bits/stdc++.h>

using namespace std;

template< typename T>

class graph{
    public:
    map<T,list<T>>adjlist;

    void addEdge(T u,T v, bool direction){
        adjlist[u].push_back(v);
        adjlist[u].push_back(u);
    }

}

void printadjlist(){
    for(auto i:adjlist){
        cout<<i.first<<endl;
        for(auto j:i.second){
            cout<<j.first<<j.second<<endl;
        }
    }

}

void bfs(int src,map<int,bool> &visited){
    queue<int> q;
    q.push(src);

    visited[src]=true;
    while(!q.empty()){
        int front=q.front();
        count<<front<<endl;
        q.pop();

        for(auto neigh:adjList[front]){
            if(!visited[neigh]){
                q.push[neigh];
                visited[neigh]=true;
            }
        }
    }
}
void dfs(int src,map<int,bool &visited)
{
    visited [src]=true;
    cout<<src;
    for(auto neigh: adjList[src]){
        if(!visted[neigh]){
            dfs(neigh,visted);
        }
    }
}

int main(){
    
}


void bfscyclic(int src){
    map<int,bool> visited;
    map<int,int> parent;

    queue<int> q;

    q.push(src);
    visited[src] =true;
    parent[src]=-1;

    while(!q.empty()){
        int front=q.front();
        cout<< front<<endl;
        q.pop();
        for(auto neigh: adjList[front]){
            if(visited[neigh]==true && neigh !=parent[front]){
                return true;
            }
            else if(!visited[neigh]){
                  q.push(neigh);
                  visited[neigh]=true;
                  parent[neigh]=front;
            }
        }
    }
}



//Topological Sort  ( Directed Acyclic graph me lagta hai)
/* 
Linear ordering of vertices/nodes such that for every edge u->v vertex u comes before v.
Indegree--Inward pointed edge  

steo 1 --- calculate indegree for the each node....
step 2----- BFS kar do  
steps===jiski bhi indegree 0 aa rahi usko push kar 
--------visited true mark kar do.
--------front nikal 
--------neighbour  nikal do
--------uski indegree -- kar do.

step -----find the indegree for each node
---------push all the nodes and indegree 0 in a queue
---------

Implementation 
-----DFS
-----Kahn's Algorithm
*/

void toposort(){
     //step 1; find out all indegrees
    map<int,int> indegree;
    queue<int> q;
   
    for(auto i: i.second)
    {
        indegree[i]++;
    }
   for(auto i: indegree){
    if(i.second == 0){
        q.push(i.first);
    }
   }

   //Step 3: BFS
   while(!q.empty()){
    int front= q.front();
    q.pop();
    for(auto neigh: adjlist[front]){
        indegree[neigh]--;
        if(indegree[neigh]==0){
            q.push(neigh);
        }
    }
   }
    

}


//shortest path----
//for undirected graph

//Directed Graph-----

