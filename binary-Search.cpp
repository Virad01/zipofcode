// Binary Search in C++

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