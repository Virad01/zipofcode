// //find the common element in 3 sorted arrays 


// #include<iostream>

// using namespace std;

// void findCommon(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){

//     int i=0,j=0,k=0;

//     while(i<n1 && j<n2 && k< n3){

//         if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
//             cout<<arr1[i]<< " ";
//             i++;
//             j++;
//             k++;

//         }
//         else if(arr1[i] < arr2[j])
//         i++;

//         else if(arr2[j] < arr3[k])
//         j++;

//         else
//         k++;
//     }
// }

// int main(){
//     int arr1[] = { 1, 5, 10, 20, 40, 80 };
//     int arr2[] = { 6, 7, 20, 80, 100 };
//     int arr3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int n3 = sizeof(arr3) / sizeof(arr3[0]);
 
//     cout << "Common Elements are ";
//     findCommon(arr1, arr2, arr3, n1, n2, n3);
//     return 0;
// }


// find the first repaeting element in an array 



#include <bits/stdc++.h>
using namespace std;


void printFirstRepeating(int arr[], int n)
{
	
	
	int k = 0;

	
	int max = n;
	for (int i = 0; i < n; i++)
		if (max < arr[i])
			max = arr[i];

	
	int a[max + 1] = {};

	
	int b[max + 1] = {};

	for (int i = 0; i < n; i++)
	{
	
		
		if (a[arr[i]])
		{
			b[arr[i]] = 1;
			k = 1;
			continue;
		}
		else
			
			a[arr[i]] = i+1;
	}

	if (k == 0)
		cout << "No repeating element found" << endl;
	else
	{
		int min = max + 1;
	
		
		for (int i = 0; i < max + 1; i++)
			if (a[i] && min > a[i] && b[i])
				min = a[i];
		cout << arr[min-1];
	}
	cout << endl;
}


int main()
{
	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };

	int n = sizeof(arr) / sizeof(arr[0]);
	printFirstRepeating(arr, n);
}


//find the subarrays with sum equals 0 and 1s


