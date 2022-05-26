// question-- find the first non  repeating element in an array 

//optimized approach 1 using hashing 

#include<bits/stdc++.h>

using namespace std;

int firstnre(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;         // storing elememts in an array 

    for(int i=0;i<n; i++){
         if(mp[arr[i]]==1)
         
             return arr[i];
         

         return -1;
    }
}

int main() {
   int arr[]={1,1,2,3,4};
   int n=5;

   cout<<firstnre(arr,n);
}