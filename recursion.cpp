/// Recursion Love Babbar        25 may 2022

/* 
Recursion--- when a function call itself

agar  aapke function body ke andar sabse end me recursive call 
hai to wo tail recursion hai aur head recursion me ulta hota hai 







 */

#include<iostream>

using namespace std;
int factorial(int n){
    if(n==1)
    return 1;

    
    return n*factorial(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;

    cin>>n;

    cout<<"factorial is "<<factorial(n)<<endl;


}