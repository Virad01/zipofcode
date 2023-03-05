/*
Sorting Techniques 
--selection Sort--> array ko do part me divide karta hai --left part me sorted and right part me unsorted 

*/




#include<bits/stdc++.h>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int count=0;
    if(a>b)
    count=0;
    else
    {
        while(a<=b){
            a=a*3;
            b=b*2;
            count++;
        }

        
    }
    cout<<count<<endl;
    return 0;
}