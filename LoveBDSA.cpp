
// C++ code to linearly search x in arr[]. If x

// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int x)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		if (arr[i] == x)
// 			return i;
// 	return -1;
// }

    
// int main(void)
// {
// 	int arr[] = { 2, 3, 4, 10, 40 };
// 	int x = 10;
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Function call
// 	int result = search(arr, n, x);
// 	(result == -1)
// 		? cout << "Element is not present in array"
// 		: cout << "Element is present at index " << result;
// 	return 0;
// }


//reverse an array 
//  #include<iostream>

//  using namespace std;
//  void reverseArray(int arr[],int n){
//      int i=0;
//      int j=n-1;

//      while(i<j){
//          swap(arr[i],arr[j]);
//          i++;
//          j--;
//      }
//  }
//  int main(){
//      int arr[]={3,5,6,4,5,9};
//      int n = sizeof(arr) / sizeof(arr[0]);
//      reverseArray(arr,n);

//      //print the array 

//      for (int i=0;i<n;i++){
//          cout<<arr[i] <<" ";
          
//      }
    
//      return 0;
//  }

// find the maximum number in array using INT_MAX and INT_MIN
// void FindMax(int arr[],int n){
//     int ans=INT_MIN;

//     for(int i=0;i<n;i++){
//         ans= max(ans,arr[i]);
//     }

//     return ans;

// }
// int getmax(int a,int b){
//     if(a>b)
//     return a;

//     else
//     {
//         return b;
//     }
// }

// 



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



//find the union and intersection of the 2 sorted array

#include<iostream>

using namespace std;


int findunion()
{
    
}
int main(){

}


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