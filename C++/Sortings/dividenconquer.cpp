

/*

HW--Inversion Count 
Median OF two Sorted arrays 

delete thr dynamic array after the use 
inplace sorting 

*/

//Merge Sort 



include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int leftLength = mid-s+1;
    int rightLength = e-mid;

    //create  left and right parts
    int *left = new int[leftLength];
    int *right = new int[rightLength];

    //copy into left array
    int originalIndex = s;
    for(int i=0; i<leftLength; i++) {
        left[i] = arr[originalIndex++];
    }

    //copy into right array
    originalIndex = mid+1;
    for(int i=0; i<rightLength; i++) 
    {
        right[i] = arr[originalIndex++];
    }

    // now we have 2 sorted arrays 
    // we have to merge them

    int leftIndex = 0;
    int rightIndex = 0;
    originalIndex = s;

    //compare elements from left and right array and copy into original array
    while(leftIndex < leftLength && rightIndex < rightLength) {
        if(left[leftIndex] <= right[rightIndex]){
            arr[originalIndex++] = left[leftIndex++];
        }
        else{
            arr[originalIndex++] = right[rightIndex++];
        }
    }
    //check if any more element is present in left array ,
    // then copy it to original array
    while(leftIndex < leftLength) {
         arr[originalIndex++] = left[leftIndex++];
    }

    //check if any more element is present in right array ,
    // then copy it to original array
     while(rightIndex < rightLength) {
          arr[originalIndex++] = right[rightIndex++];
    }
}

void mergeSort(int arr[], int s, int e) {
    //base case
    if(s >= e) 
    {
        return ;
    }

    int mid = (s+e)/2;

    //left part
    mergeSort(arr, s, mid);

    //right part
    mergeSort(arr, mid+1, e);

    //merge 2 sorted parts
    merge(arr, s, e);
    

}


int main() {

    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = 6;

    mergeSort(arr, 0, size-1);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}


/*
Quick Sort 


*/
int partition(int arr[], int s, int e) {

    //taking first element as pivot 
    int pivot = arr[s];

    //count smaller elements
    int cnt = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot)
            cnt++;
    }


    //find right place for pivot
    int pivotIndex = s + cnt;

    //swap
    swap(arr[pivotIndex], arr[s]);


    //handle left and rtight
    // we want all lesser element on left side
    // and greater element on right side of pivotIndex
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        //already smaller element in left side
        while(arr[i] <= pivot) {
            i++;
        }

        //already greater element in right side
        while(arr[j] > pivot) {
            j--;
        }

        if(i <pivotIndex && j > pivotIndex)
        {                                                                                                                                                                                                                      
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) { 
    //base case
    if(s >= e) 
    {
        return;
    }

    int pIndex = partition(arr, s, e);

    //left
    quickSort(arr, s, pIndex-1);

    //right
    quickSort(arr, pIndex+1, e);

}


int main() {

    int arr[] = {12, 11, 13, 5, 6, 7, 7, 7};
    int size = 8;

    quickSort(arr, 0, size-1);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}