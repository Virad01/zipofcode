// Basic maths for DSA   14 may 

//Number is Prime or not

#include<iostream>

using namespace std;
bool isprime(){
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;

    }
    return true;
}
int main(){

}

// leetcode -- count prime 
class Solution {
public:
    int countPrimes(int n) {
        //initially sabhi ko prime bana do
          vector <bool> v (n+1,true);
        int c=0;
        //0 aur 1 ko flase mark kar do usse koi fark nii padta hai 
        v[0] = v[1] = false;
        
        for(int i=2; i<n; i++)
        {
            if(v[i] == true)
            {
                for(int j=2*i; j<n; j=j+i)
                    v[j] = false;
            }
            
            if(v[i] == true)
                c++;
        }
        
        return c;
    }
};

//optimization-----sieve of eratosthenes

//modulus operator is time consuming 

//for even number finding we use n&1==0 instead of n%2==0 as the bit level of operations are much more faster than modulus operator
// {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{To Do List}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// {{{{{even number  using  bit level operations}}}}}
// {{{{{{{{Bitwise operations}}}}}}}}
//differnce between arr[10] and vector<int> arr[];
//segmented sieve 
//HP GP AP


//sieve of eratosthenese
//i*i<n wala concept 
#include<iostream>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        //initially sabhi ko prime bana do
          vector <bool> prime(n+1,true);
        int c=0;
        v[0] = v[1] = false;
        
        for(int i=2; i<n; i++)
        {
            if(v[i] == true)
            {
                for(int j=2*i; j<n; j=j+i)
                    v[j] = false;
            }
            
            if(v[i] == true)
                c++;
        }
        
        return c;
    }
};


int main()
{


}



//GCD or HCf 
//Euclids Algorithms ----gcd(a,b)= gcd(a-b,b) where a>b 
//lcm(a,b)*gcd(a,b)=a*b ----yaad rakna hai 
//co-prime--no common factor 


#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b)
         a=a-b;
         else
         b=b-a;

         
    }
    return a;
}

int main(){

}

//modulo arithmetics---
//kisi bhi number ka mod lete ho to uske answer ki range 0-n-1 tak aati hai

#include<iostream>

using namespace std;

int main(){

}

//find the answer why modulo 10^8+7??????
//formulas------(a+b)%m= (a%m + b%m+m)%m 
// formulas------(a-b)%m= (a%m - b%m+m)%m  m plus negative bachane ke liye kara hai
//formulas---(a*b)%m= (a%m) * (b%m)

//formulas--- KING OF THE SHOW
//////////// (a/b)%m--------to read (codeforces article  modulo arithmetic)

//pigeonhole principle
//catelon number 






///fast exponentiations 

