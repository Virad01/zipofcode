//DP Lecture 1

#include<iostream>
#include<vector>
using namespace std;


int solveRec(int n ) {
    //base case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    int ans = solveRec(n-1) + solveRec(n-2);
    return ans;
}

int solveRec(int n) {
    //base case
    if(n== 1232) {
        return 123;
    }

    int ans = solveRec(12)  -solveRec(1242);
    return ans;;
}


//Recursion
int solve(int n) {
    //base case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    int ans = solve(n-1) + solve(n-2);
    return ans;
}

//Rec + Mem
//step1: create dp array + pass in function
//step2: store the ans in dp array
//step3: check if dp array already has answer, if yes, then return. Just after the base case
int solveMem(int n, vector<int>& dp) {
    //base case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1; 
    //step3 
    if(dp[n] != -1) {
        return dp[n];
    }
    
    int ans = solveMem(n-1, dp) + solveMem(n-2, dp);

    //step2
    return dp[n] = ans;
}

//Bottom-Up approach
//Step1: dp array creation
//step2: Base case analysis of Rec code and update dp array accordingly
//step3: find the range for the changing variable and copy paste the logic in rec code accoprdingly
int solveTab(int nthTerm) {

    //step1: createa DP array
    vector<int> dp(nthTerm+1, 0);

    //step2: update DP array, basis on Recursion Base case
    dp[0] = 0;
    dp[1] = 1;

    //step3: find range and copy paste
    for(int n=2; n<=nthTerm; n++) {
        int ans = dp[n-1] + dp[n-2];
        dp[n] = ans;
    }
    return dp[nthTerm];
}

int solveTabSO(int nthTerm) {
    
    int prev1 = 1;
    int prev2 = 0;
    int curr;

    
    for(int n=2; n<=nthTerm; n++) {
        int ans = prev1 + prev2;
        curr = ans;
        
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    

    cout << "ans is -> " << solveRec(n) << endl;




    return 0;
}



/////Max Sum of Non-Adjacent Element 


#include<bits/stdc++.h>

using namespace std ;


int solve(vector<int> &arr,int index,int &ans,vector<int>& dp  ){
    //base case 
    if (i>=arr.size())
    return 0;
    if(dp[index]!=-1)
    return dp[index];



    int incl=arr[i]+solve(arr,index+2,dp);
    int exc=0+solve(arr,index+1,dp);

    return dp[index]=max(incl,exc);
}
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);

    int ans=0;
    vector<int> dp(arr.size(),-1);

    solve (arr,0,dp,ans);
    return 0;




}

//tabulation/*

Create a Function
create a dp array inside
find the range  
*/
//Bottom Up Approach 



int solveTab(vector<int> arr){
    vector<int> dp(arr.size(),0);
    int n = arr.size();

    for(int index=n-1;index>=0;index--){

        int incl=arr[index]+dp[index+2];
        int exl= 0+ dp[index+1];
        dp[index]=max(incl ,excl);



    }
    return dp[0];
    

}





is code me  1d dp lagegi'



first step is to add the memoization solution 

create the dp array 
    vector <int> dp (arr)


