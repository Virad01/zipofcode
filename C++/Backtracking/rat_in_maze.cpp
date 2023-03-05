/*


*/

#include<iostream>
using namespace std;

class solution{
    void solve(int i,int j,vector<int>> &a,int n, vector < string > & ans,string move, vector<vector<int>> &vis){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return ;

        }


        if(i+1<n && !vis[i+1][j] && a[i+1][j]==1){
            vis [i][j]=1;
            solve(i+1,j,a,n,ans,move+'D',vis);
            vis[i][j];
        }

        if
    }

}

int main(){
    int n=4;
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    solution obj;
    vector< string> result = obj.findPath(m,n);
    if(resu)

}