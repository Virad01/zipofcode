//Backtracking ------2 june 2022

/*
--Letter tile possibility --leetcode
--generate parenthesis 
--catelon numbers 
--permutation of strings 
--Beautiful arrangement 

*/
//Letter tile possibility 
/*
class Solution {
public:
    void solve(string tiles,string &output,set<string> &result,map<int,bool> flag){
        for(int i=0;i<tiles.length();i++)
        {
            if(flag[i]==0)
            {
                char ch = tiles[i];
                output.push_back(ch);
                flag[i]=1;
                
                cout<<output<<endl;
                result.insert(output);
                solve(tiles,output , result,flag);
                
                //Backtracking part 
                output.pop_back();
                flag[i]=0;
            }
        }
        
    }
    int numTilePossibilities(string tiles) {
        string output= "";
        set<string> result;
        map<int,bool> flag;
        
        solve(tiles,output,result,flag);
        return result.size();
        
        
        
    }
};
*/

//Generate Parenthesis

/*



*/


/*
ip-"AAB"
op-8

{a,b,aa,ab,ba,aab,aba.baa}

yaha pe power set bhi nikal diya aur permutation bhi kar dia 



*/
#include<iostream>

using namespace std;





/*
Backtracking 2 =================== 4 june 2022

---combination sum---leetcode
---minimum non zero products of the array  elements--leetcode 
*/


/*

Backtracking 3 
Dry run the code

----------------------------------------------------------------------------------------

*/