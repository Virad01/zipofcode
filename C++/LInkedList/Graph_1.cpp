



///Adjancey list 
/*
*/



#include<iostream>

using namespace std;

template <typename T>

class Graph {
    public:
    map<T,list<T>>adjList;

    void addEdge(T u,T v, bool direction ){
        adjList[u].push_back(v);

        if(direction ==0){
            adjList[v].push_back(u);
        }
    }

    void printAdj(){
        
    }
}