//cyclic bfs 

void cyclicbfs(int src){
    map<int,bool> visited;
    map<int ,int > parent;
    queue<int> q;

    q.push(src);
    visted[src]=true;
    parent[src]=-1;

    while(!q.empty()){
        int front =q.front();
        cout<<front<<endl;

        q.pop();

        for(auto neigh : adjlist[front]){
            if (visited[neigh]==true && neigh !=parent[front]){
                return true;
            }
            else if(!visted[neigh]){
                q.push(neigh);
                visted[neigh]=true;
                parent[neigh]=front;
            }
        }
    }
}


//remove duplicates

class solution
{
    public:
    int remove
}