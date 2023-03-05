//using DP printing the nth fibonacci number 



#include<iostream>

using namespace std;

int solveMem(int n,vector<int> &dp){
    //base case
    if(n==0)
    return 
}


int main(){

}



#include<bits/stdc++.h>
using namespace std;


int median(int [], int);

int getMedian(int ar1[],
			int ar2[], int n)
{
	
	if (n <= 0)
		return -1;
	if (n == 1)
		return (ar1[0] +
				ar2[0]) / 2;
	if (n == 2)
		return (max(ar1[0], ar2[0]) +
				min(ar1[1], ar2[1])) / 2;

	
	int m1 = median(ar1, n);
	
	int m2 = median(ar2, n);

	
	if (m1 == m2)
		return m1;

	
	if (m1 < m2)
	{
		if (n % 2 == 0)
			return getMedian(ar1 + n / 2 - 1,
							ar2, n - n / 2 + 1);
		return getMedian(ar1 + n / 2,
						ar2, n - n / 2);
	}

	
	if (n % 2 == 0)
		return getMedian(ar2 + n / 2 - 1,
						ar1, n - n / 2 + 1);
	return getMedian(ar2 + n / 2,
					ar1, n - n / 2);
}


int median(int arr[], int n)
{
	if (n % 2 == 0)
		return (arr[n / 2] +
				arr[n / 2 - 1]) / 2;
	else
		return arr[n / 2];
}


int main()
{
	int ar1[] = {1, 2, 3, 6};
	int ar2[] = {4, 6, 8, 10};
	int n1 = sizeof(ar1) /
			sizeof(ar1[0]);
	int n2 = sizeof(ar2) /
			sizeof(ar2[0]);
	if (n1 == n2)
		cout << "Median is "
			<< getMedian(ar1, ar2, n1);
	else
		cout << "Doesn't work for arrays "
			<< "of unequal size";
	return 0;
}

//DYNAMIC PROGRAMMING 2 LECTURE 2
/*
Maximum Sum  of Non Adjacent Element
*/
#include<bits/std++.h>

using namespace std;


///TO Implement DP on Recursion 
/*
we need to do three steps--
1. Declare the dp array. 
2. store the recursive answer int the dp array.
3. check if ( dp[n]!=-1) return dp[n]
*/
#include<bits/stdc++.h>
using namespace std;
int solve(n,vector<int> &dp){
	if(n<=1) return n;
	if( d[n]!=-1) return dp[n];
	return dp[n]=solve(n-1,dp) + solve(n-2,dp);

}
int main(){
	int n;
	cin>>n;
 vector<int> d(n,-1);
}

//to eliminate this extra space 
//we will use the prev1 and prev2
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int prev2=0;
	int prev1=1;
	for(int i=2;i<=n;i++){
		int cur= prev+prev2;
		prev2=prev;
		prev=cur;
	}
	cout<<prev;
	return 0;
}


//Recognise that it is DP problem
/*
if the problem says -- count the number of ways 
                       ----Try all possible ways ( count or best possible )

					   find if the problem is recursive then ands 
*/
// Tricks
/*
try to represent the problem int terms of index
do all the possible stuff on that index according to the problem statement 
sum of all stuff-- count all ways
min of all stuff--find the min 

*/

//DP 3rd lecture

//Frog Jump
/*

 */