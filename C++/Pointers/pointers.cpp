//Pointers-1        18may

/*

if we cout<<arr; we will get a hexadecimal value which shows arr stores hexadecimal address not a base  address 
we can say arr is also a pointer 

cout<<arr and cout<<&arr[0] and cout<<&arr  will give the same output  that is a hexadecimal address 


1 pointer uses 8 byte 



*/


//  i[arr]= *(i+arr) is same as  arr[i] = * (arr+i)  
#include<iostream>

using namespace std;
void func(int *p)

int main(){

    int a = 5;
    int *p=&a;

    cout<<
}