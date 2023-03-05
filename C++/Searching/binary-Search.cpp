// Binary Search in C++
// Implement the bianry search   

#include <iostream>
using namespace std;

bool binarySearch(int array[], int x, int low, int high) {
  
	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    int midelement=mid;

    if (midelement == x)
      return mid;

    if (midelement < x)
      low = mid + 1;

    else
      high = mid - 1;

    return true;
  }

  return false;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 2;
  int n = sizeof(array) / sizeof(array[0]);
   binarySearch(array, x, 0, n - 1);

   cout<<binarySearch<<endl;
  

}
//Binary Search Problem 2---7 May 

//problem 1---EKO spoj

#include<iostream>
#include<algorithm>
using namespace std;

bool isPossibleSolution(int mid,int arr[],int n,int target){
    int sum = 0;
    for(int i=0; i<n;i++){
        int diff = 0;

        if(arr[i] > mid )
        diff = arr[i]- mid;

        sum = sum+ diff; 
    }

    if(sum >=target)
    return true;    4 .0?V XZVN  
    
    return false;

}

int getMaxHeightofSaw(int arr[],int n, int target){
    sort(arr,arr+n);
    int s=0;
    int e= arr[n-1];

    int ans = -1;

    while(s<=e){
        int mid = s+ (e-s)/2;

        if(isPossibleSolution(mid,arr,n,target)){
            //store ans
            ans = mid;
            //move to right

            s = mid +1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
    

}
int main(){
    int arr[]={15,8,18,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int target= 30;

    int ans = getMaxHeightofSaw(arr,4,target);
    cout << "answer is" << ans <<endl;

    return 0;

    
}




//Agressive cow

#include<bits/stdc++.h>

using  namespace std;
int n,cows;
int partitions[N];
int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>t>>cows;
    for()
  }


}



//Find the first and last position of element in a sorted array 
#include<bits/stdc++.h>

using namespace std;

 vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int lo=-1;                  //left occurence
        int ro=-1;                  //right occurence
        vector<int> ans(0);
        while(s<=e){
            if(nums[mid]==target){
               e=mid-1;                     //This while loop will find left occurence
              lo=mid;  
                
            }
            
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
    
        s=0;                               //as we need to initialise our variables again to find
        e=nums.size()-1;                   // right occurence
        mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
               s=mid+1;                    //This loop will give right occurence of our target
              ro=mid;  
                
            }
            
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
            
        }
        ans.push_back(lo);
        ans.push_back(ro);
        return ans;
        
        
    }
};



//Peak index in  mountain array

#include <bits/stdc++.h>

using namespace std;

int peak(vector<int> arr){

    int s=o;
    int e=arr.size()-1;
    int mid = s+ (e-s)/2;

    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid =

    }
    return s;

}

int main(){



}



//search in the sorted and rotated array
#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}



int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
    
}


///Find the pivot in an array 

 `#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    int arr[5] = {1, 3, 8, 10, 17};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}

