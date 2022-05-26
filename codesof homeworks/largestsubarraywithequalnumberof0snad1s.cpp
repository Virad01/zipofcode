//questions--- Largest subarray with equal number of 0s and 1s

/*
Algorithms 

Run a loop from i=0 to n-2
  if(arr[i]==1)
  sum=1
  else
  sum=-1
  Run inner loop from j=i+1 to n-1
      sum+=arr[j]
      if(sum==0)
        if(j-i+1>max_size)
           start_index=i
           max_size=j-i+1
Run a loop from i=start_index till max_size-1
print(arr[i])



*/

#include<iostream>

using namespace std;


int  findsubarray(int arr[],int n ){
    int sum =0;
    int maxsize = -1, startindex;


    for (int i=0;i<n-1;i++){
        sum=(arr[i] == 0) ? -1 : 1;

        for(int j=i+1;j<n;j++){
            (arr[j]==0) ?( sum += -1) : (sum+=1);


            if(sum==0 && maxsize < j-i+1){
                max
            }
        }
    }
}

int main(){

}