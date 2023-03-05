/*
Heap= CBT + satisfy the heap order property 
CBT= All levels filled except last level , Node added from the left to right 

*important relation (for 1 based indexing)  node = ith 
                      parent = i/2
                       left child = 2i
                       right child= 2i+1

                       (for 0 based indexing)
                       left = 2i+1
                       right = 2i+2

*/

/*
Max heap 
Min Heap 
Insertion----Insert the value at the  last position 
             Take the node to its correct position 


             ( pehle parent nikaal lo
               parent ko node se compare kar do 
               if arr[parent]<arr[i]   then swap  


             )


  Deletion-----maxheap (algorithm)
            --swap(arr[i],arr[n])
            --remove the desired number 
            --put the element in correct position


*/

//array se implement 

#include<iostream>

using namespace std;
class Heap(){
  int arr[250];
  int size;

  Heap(){
    size=0;

  }

  void insertIntoHeap(int val){
    size=size+1;
    int index=size;

    //insert the value
    arr[index]=val;

    //take value to the right position

   while(index>1){
    int parentIndex=index/2;
    if(arr[parentIndex] < arr[index]){
      swap(arr[parentIndex] , arr[index]);
      index=parentIndex;
    }
    else{
      break;
    }

   }  


  }
}

int main(){

}                                           
