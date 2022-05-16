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


//unique number occurence


