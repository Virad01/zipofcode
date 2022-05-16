//Day 1 

//precomputation Techniques 

/* #include<bits/stdc++.h>

using namespace std;

const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

int main()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<N;++i){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // long long fact 1;
        // for(int i=2; i<=n;++i){
        //     fact = (fact*i) % M;

        // }

        cout<< fact[n] <<endl;
    }
    //o(t*n)=10^10 old
    //O(n)+o(t)= 10^5 + 10^5
}
*/


//hashing techniques 
/* 
Given an array a of N integers. Given Q queries and in each  query 
given a number x,print count of that number in array.

constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)[
        cin>>a[i];

    ]

    int Q;
    cin>>Q;

    while(Q--)
    {
        int x;
        cin>>x;
        int cnt=0;
        for(int i=0;i<n;++i){
            if(a[i]==x){
                cnt++;
            }

        } 
        cout<<cnt<<endl;
    }

    //o(q)+o(q*n)==o(n^2)===10^10

}


//By precomputation Techniques

// using Hashing 

/* agar array elemet ki range 10^9 tak hoti to main hashing nahi laga sakta tha kyunki maximum array 
size hum sirf 10^7 tak hi declare kar sakte hai */

#include<bits/stc++.h>

using namespace std;
const int N =1e7 + 10;
int hsh[N];

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        hsh[a[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        // int cnt=0;
        // for(int i=0;i<n;++i){
        //     if(a[i]==x){
                
        //     }
        // }
        cout<<hsh[x]<<endl;
    }
    //o(n)+o(q)==o(n)===2*10^5

}


//prefix sum in 1d and 2d arrays 

/*
Given an array of N integers.Given Q queries and in each query given L and R 
print sum of array elements from index L to R( l,R included)

constraints

1<=N<=10^5
1<=a[i]<=10^9
1<=q<=10^5
1<=L,R<=N
*/

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int a[N];

int main(){
    int n;
    cin>>n;

    for(int i =1;i<n; ++i){
        cin>> a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        lomg long sum=0;
        for (int i=l;i<=r;++i){
            sum += a[i];

        }
        cout << sum <endl;
    }
}


//using precomputation techniques 

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;

    for(int i =1;i<n; ++i){
        cin>> a[i];
        pf[i]=pf[i-1]+a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
        // lomg long sum=0;
        // for (int i=l;i<=r;++i){
        //     sum += a[i];

        // }
        // cout << sum <endl;
    }
    //O(N) + O(1) = 10^5
}



//Prefix Sum In 2d arrays

/* 
Given 2d array a of N*N integers. Given Q queries and in each query given a,b,c and d
print sum  of square represented by (a,b) as top left point and (c,d) as top bottom right point 


constraints
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/

#include<iostream>
using namespace std;
const int N = 1e3+10;
int a[N][N];


int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j){
            cin>>a[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin >>a >>b>>c>>d;

        long long sum = 0;
        for(int i=a;i<=c;++i){
            for(int j=b;j<=d;++j){
                sum+=ar[i][j];
            }
        
        }

        cout << sum <<end;

    }

    //o(N^2) + 0(q*n^2) === 10^5* 10^6== 10^11


}


//using precomputation algorithms 
// {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{Revison }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

#include<iostream>
using namespace std;
const int N = 1e3+10;
int a[N][N];
long long pf[N][N];

int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j){
            cin>>a[i][j];
            pf[i][j] = a[i][j] + pf[i-1][j]+
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin >>a >>b>>c>>d;

        // long long sum = 0;
        // for(int i=a;i<=c;++i){
        //     for(int j=b;j<=d;++j){
        //         sum+=ar[i][j];
        //     }
        
        // }

        cout << pf[c][d]-pf[a-1][d]-pf[c][b-1] <<end;

    }

    //o(N^2) + 0(q*n^2) === 10^5* 10^6== 10^11


}


