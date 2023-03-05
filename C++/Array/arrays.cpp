

//print all the subset of a given arrays 
//check whether the subarray is present in the given arrays 





//print all the subarrays of a given array
//A subarray is a contiguous part of array. An array that is inside another array
/*
for the array int arr[] = {1, 2, 3, 4};
the subarrays are 
1 
1 2 
1 2 3 
1 2 3 4 
2 
2 3 
2 3 4 
3 
3 4 
4

*/
#include<bits/stdc++.h>

using namespace std; 

void subArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            for(int k=i; k<=j;k++)
            cout<<arr[k]<<" ";

            cout<<endl;
        }
    }
}

int main(){

}




//print all the subsequence of a given array
//A subsequence is a sequence that can be derived from another sequence by removing zero or more elements, 
//without changing the order of the remaining elements. 
/*
for the array int arr[] = {1, 2, 3, 4};
the subsequences are 
1 
2 
1 2 
3 
1 3 
2 3 
1 2 3 
4 
1 4 
2 4 
1 2 4 
3 4 
1 3 4 
2 3 4 
1 2 3 4


*/

#include<bits/stdc++.h>

using namespace std; 


int main(){

}




//note
/*
A subarray or substring will always be contiguous, but a subsequence need not be contiguous. 
That is, subsequences are not required to occupy consecutive positions within the original sequences. 
But we can say that both contiguous subsequence and subarray are the same.
*/



//Minumum Platforms GFG

#include<bits/stdc++.h>

using namespace std;
int maxPlatform(int arr[],int dep[],int n){
    	sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1;
    int j=0;
    int maxi=INT_MIN;
    int platform=1;
    while(i<n && j<n){
    
    if(arr[i]<=dep[j]){
        
       platform++;
    i++;
 
    }
    
   
    else if(arr[i]>dep[j]) {
         platform--;
    j++;
    }
   

    maxi=max(maxi,platform);
    
     }

     return maxi;
}

int main(){
    int arr[]={900,940,950,1100,1500,1800};
    int dep[]={910,1200,1120,1130,1900,2000};

    cout<<maxPlatform(arr,dep,6)<<endl;

      
}



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


 /**
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



//Finding the intersection in two sorted array 

#include <bits/stdc++.h> 
using namespace std; 
  

int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       i++; 
    else if (arr2[j] < arr1[i]) 
       j++; 
    else /* if arr1[i] == arr2[j] 
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  } 
} 
  

int main() 
{ 
  int arr1[] = {1, 2, 4, 5, 6}; 
  int arr2[] = {2, 3, 5, 7}; 
    
  int m = sizeof(arr1)/sizeof(arr1[0]); 
  int n = sizeof(arr2)/sizeof(arr2[0]); 
    
 
  printIntersection(arr1, arr2, m, n); 
  
  return 0; 
}
*/ 


// // // // // //kadens algorithm


// // // // // // pro tip at least ek positive element hona chahitye 


// #include<iostream>

// using namespace std;


// int getmaxarraysum(int arr[],int n){
//     int ans=INT_MIN;
//     int sum=0;

//     for (int i=0;i<n;i++){
//         sum=sum+arr[i];

//         ans=max(ans,sum);

//         if(sum<0)
//         sum=0;
//     }
//     return ans;

// }
//   int main() {
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
  
//     cout<<getmaxarraysum(arr,n);


// }



// // // // //Palindrome


// // // // #include<iostream>

// // // // using namespace std;

// // // // bool palindrome(int arr[],int n){
// // // //     int i=0;
// // // //     int j=n-1;
// // // //     while (i<j)
// // // //     {
// // // //         if(arr[i]==arr[j]){
// // // //             i++;
// // // //             j--;
// // // //         }
// // // //         else{
// // // //         return false; }
// // // //     }
// // // //     return true;
// // // // }
// // // // int main(){

// // // //     int arr[]= {1,0,3,0,0,0,1,4};

    

// // // //     cout<<"palindrome or not"<<palindrome(arr,8)<< endl;

  


// // // // }


// // // //find the union and intersection of 2 sorted arrays


// // // // #include<iostream>

// // // // using namespace std;

// // // // int find_union(int arr1,int arr2,int n,int mvb )

// // // // int  main(){

        
// // // // }


// // // //move negative number to the one side of the array 

// // // //the idea is simply apply the partitioning approach of quick sort
// // // #include<iostream> 
// // // using namespace std;


// // // void rearrange(int arr[],int n){
// // //     int j=0;

// // //     for(int i=0;i<n;i++){
// // //         if(arr[i]<0){
// // //             if(i!=j)

// // //             swap(arr[i],arr[j]);
// // //             j++;
// // //         }
// // //     }
// // // }

// // // void printArray(int arr[],int n){
// // //     for(int i=0;i<n;i++)
// // //     cout<<arr[i];
// // // }


// // // int main(){
// // //     int arr[]={-1,2,3,4,-3,-6,-9};
// // //     int  n = sizeof(arr)/sizeof(arr[0]);

// // //     rearrange(arr,n);
// // //     printArray(arr,n);
// // // }


// // // //program of cyclic rotation of array by one 


// // // void rotate(int arr[],int n){
// // //     int i=0; j= n-1;

// // //     while(i!=j){
// // //         swap(arr[i],arr[j]);
// // //         i++;
// // //     }
// // // }

// // // find the duplicate in the array 





// // //FIND THE pair to the sum of given value 


// // #include<iostream>

// // using namespace std;


// // void pairsum(int arr[],int n,int target)
// // {
// //     for(int i=0;i<n-1;i++)
// //     {
// //         for(int j=i+1; j<n;j++)
// //         {
// //             if(arr[i]+arr[j]==target){
// //                 cout<< "Pair found"<<arr[i]<<arr[j]<<endl;
// //                 return;
// //             }
// //         }
// //     }

// //     cout<<"pair not found"<<endl;


// // }
// // int main(void){

// //     int arr[] = {1,2,3,4,5,6,7,8,9};

// //     int target= 10;

// //     int n=sizeof(arr)/sizeof(arr[0]);

// //     pairsum(arr,n,target);

// //     return 0;

// // }

// //find triplet that sum to a given value 

// // #include<iostream>

// // using namespace std;
// // void findtriplet(int arr[],int n,int target){

// //     for(int i=0;i<n-2;i++){
// //         for(int j=i+1;j<n-1;j++){
// //             for(int k=j+1;k<n;k++){
// //                 if(arr[i]+arr[j]+arr[k]==target){
// //                     cout<<"target found " << arr[i] << arr[j] << arr[k] << endl;
// //                 }
// //             }
// //         }
        
// //     }
  
// //     return false;



// // }

// //     int main(void){

// //     int arr[] = {0,1,3,4,5,6,7,8,9};

// //     int target= 4;

// //     int n=sizeof(arr)/sizeof(arr[0]);

// //     findtriplet(arr,n,target);

// //     return 0;



// // }


// //check whwther an array is palindrome or not 


// #include<iostream>


// using namespace std;

// void palindrome(int arr[], int n){
//     int i=0;
//     int j=n-1;

//     while(j<i){
        
//         if(arr[i]==arr[j])
//             cout<<"it is a palindrome"<<endl;
        
       
//     }
   
// }
// int main(){

//     int arr[]={1,2,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     palindrome(arr,n);


// }


// //minimum swaps required bring elements less equal K together
/*

#include<iostream>

using namespace std;


int minswap(int *arr,int n,int k){
    // finding the count which are less than k 
    int count = 0;
    for(int i=0;i<n;++i)
      if(arr[i]<=k)
      ++count;
    // finding the count which are more than k 
    int bad=0;
    for(int i=0;i<count;++i)
        if(arr[i]>k)
        ++bad;
    
    int ans=bad;

    for(int i=0,j=count;j<n;++i,++j)
    {
        if(arr[i]>k)
         --bad;

         if(arr[j]>k)
         ++bad;

         ans=min(ans,bad);
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<minswap(arr,n,k);


}
*/


//swap alternate in array

// #include<iostream>

// using namespace std;

// void swapalteranate(int arr[],int n){
//     int i=0;

//     while(i<n){
//         if(i+1<n){
//             swap(arr[i],arr[i+1]);

//         }
//         i=i+2;
//     }
// }
// int main(){


// }

// int sortarray(int arr[],int n){
//     int one =0;
//     int zero=0;
//     int two=0;

//     for (int i=0;i<n;i++){
//         if (arr[i]==0)
//            zero++;
//         else if(arr[i]==1)
//            one++;

//         else
//         {
//             two++;
//         }

//         int i=0;
//         while(zero--){
//             arr[i]=0;
//             i++;
//         }
//          while(one--){
//             arr[i]=1;
//             i++;
//         }
//          while(two--){
//             arr[i]=2;
//             i++;
//         }
//     }
// }



/*

//move -ve no to one side of the array (two pointer approach)

#include<iostream>

using namespace std;

void movenegative(int arr[],int left,int right){

    while(left<=right){
        if(arr[left]<0 && arr[right]<0)
        {
            left+=1;
        }

        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left+=1;
            right-=1;
        }
        else if{arr[left]>0 && arr[right]>0}
        {
            right-=1;
        }
        else{
            right -=1;
            left +=1;
        }
    }
    
}
void display(int arr[], int right){
   
 
  for (int i=0;i<=right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int arr[] = {-12, 11, -13, -5,
               6, -7, 5, -3, 11};
  int arr_size = sizeof(arr) /
                sizeof(arr[0]);
   
  
  shiftall(arr,0,arr_size-1);
  display(arr,arr_size-1);
  return 0;
}
*/
/*

//Get maximum subarray sum

#include<iostream>

using namespace std;

int getmaxsum(int arr[],int n){

    int ans= INT_MIN;
    int maxabtak=0;

    for(int i=0;i<n;i++){
        maxabtak= maxabtak+arr[i];

        ans = max(ans,maxabtak);

        if(maxabtak < 0)
          maxabtak = 0;
    }

    return maxsf;
}
*/


//Majority Element 

#include<bits/stdc++.h>

using namespace std;
 int getMajority(int arr[],int n){
    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        fre[arr[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        int value=freq[arr[i]];
        if(value >n/2)
        return arr[i];
    }
    return -1;
 }
int main(){
    int arr[]={1,2,3,3,,3,4};
    cout<<getMajority(arr,6)<<endl;

    return 0;
}

