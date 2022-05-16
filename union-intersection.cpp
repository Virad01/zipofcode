//find the union and intersection of two sorted array 


#include<iostream>

using namespace std;


  void printUnion(int arr1[],int arr2[],int m,int n){
      int i=0,j=0;
      while(i<m && j<n){
          if(arr1[i]<arr2[j])
              cout << arr1[i++]<<" ";

          
          else if(arr2[j]< arr1[i])
              cout<< arr2[j++]<< " ";
          else{
              cout<< arr2[j++] << " ";
              i++;
          }
      }
      while(i<m)
       cout<< arr1[i++] <<" ";
    while(j<n)
       cout << arr2[j++] << " ";
  

}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {2,3,4,5,6,7};
    int m=6;
    int n = 6;

    printUnion(arr1,arr2,m,n);

}



// handling duplicates 
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

	static void UnionArray(int arr1[],
						int arr2[], int l1, int l2)
	{
		
		int m = arr1[l1 - 1];
		int n = arr2[l2 - 1];

		int ans = 0;

		if (m > n) {
			ans = m;
		}
		else
			ans = n;

		
		int newtable[ans + 1];
		memset(newtable,0,sizeof(newtable));
		
		cout << arr1[0] << " ";

		
		++newtable[arr1[0]];

		
		for (int i = 1; i < l1; i++) {
			
			if (arr1[i] != arr1[i - 1]) {
				cout << arr1[i] << " ";
				++newtable[arr1[i]];
			}
		}

		
		for (int j = 0; j < l2; j++) {
			
			if (newtable[arr2[j]] == 0) {
				cout << arr2[j] << " ";
				++newtable[arr2[j]];
			}
		}
	}

// Driver Code
int main()
{
	int arr1[] = { 1, 2, 2, 2, 3 };
	int arr2[] = { 2, 3, 4, 5 };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);

	UnionArray(arr1, arr2, n, m);

	return 0;
}

