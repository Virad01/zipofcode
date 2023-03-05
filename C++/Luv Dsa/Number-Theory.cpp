
/*
conversion of binary to decimal
---odd numbers ke end wali bit hamesha one rehti hai 

---binary operators


-----------------------------------------------------------
number theory part 2 

about bits 
---indexing right  to left
--set bits= bit 1 hai ki nahi 
--unset bits=bit 0 hai ki nahi
---agar hame check karna ho ki kisi bhi number ki ith bit set hai nahi to hum aisa 
number lenge jiski sirf ith bit hi set ho aur un dono ka AND kar denge agar answer 1 aa raha hom to bit set hai 
agar answer o aa raha to bit unset hai 

wo number hum left shift karke lete hai 

agar hum sirf ek bit set wale number se wo number minus kar raha hun 


tilda operator invert the binary 




Truth Table---

A   B      AND    OR   XOR(Same bi pe zero rehta hai)
0   0       0     0     0
1   0       0     1     1
0   1       0     1     1
1   1       1     1     0
*/

/*

#include<bits/stdc++.h>

using namespace std;
void printBinary(int num){
    for(int i= 10;i>=0; --i){
        cout<< ((num >> i) & 1);
    }
    cout << endl;
}

int main()

{
    printBinary(9);
    int a = 9;
    int i = 3;
    if((a & (1<<i)) !=0){
        cout << "set bit"<<endl;
    }
    else{
        cout << "not set bit"<<endl;
    }

    printBinary(a | (1 << 1));
    printBinary (~a);


}
*/


//Toggling of a bit( 0 ko 1 bannana hai 1 ko zero banana )
/*
by using the xor operator we can toogle the bit or in other 
word we can say the we can on off the desired bits 

*/

// how to coount the set bits 
/*
by using while loop
while(int i=31;i>=0;i++){
    if((a&(1<<i)) !=0){
        count++;
    }

}
cout << count << endl;


inbuilt function for counting the set bits   __builtin_popcount(a) << endl;
for the long long integers cout<<__builtin)_)popcountll() 
*/




////Number Theory Part 3

/*
6 amzing bit manipukation tricks

modulo and division operators are the slower operator 

jab hum  left shift one karte hai to x2 hota hai
jab  hum right shift one karte hai to divide by one hota hai 

like for example  hig+low/2 can be written as hig+low >> 1;






#include <bits/stdc++.h>

using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;--i){

        cout<< ((num>>i)&1);

    }
    cout<<endl;
}
int main(){
    int n=5;
    printBinary(n);


}


*/

/*
convert a upper case and lower case character using bit manipulation 
1<<5 is the ascii value of space;

koi bhi uppercase character ko agar hum space ke  saath OR kar denge to wo lowercase  me convert ho jayega 
koi bhi lower case character ko agar hum under score ke saath binary kar denge to wo upper case me convert ho jayega 


conclusion 

capital letter ke binary me fifth bit set hoti hai 
small letter ke binary me fifth bi unset  hoti hai 




#include<bits/stdc++.h>

using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;++i){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}
int main(){

    for(char c= 'A'; c<='E';++c){
        cout << c<<endl;
        printBinary(int(c));

    }

    for(char c= 'a'; c<='e';++c){
        cout << c<<endl;
        printBinary(int(c));

    }
    char A='A';
    char a= A | (1<<5);
    cout<<a<<endl;
    cout<<char(a &(~(1<<5)))<<endl;
    cout << char(1<<5);



}

*/


/*
trick4---- to clear the ith bit of a number

koi bhi 2 ki power wale number me se minum 1 kar lo to 0000011111 aisa number mil jata hai
for example to get 00000011111  we will do 00000100000-1

kisi bhi number ki power check karne ke liye hum n & n-1 check karte hai agar ye true hai to power ofg 2 nahi hai 
agar ye flase hai to power of two hai 
*/


#include<bits/stdc++.h>

using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main(){
    printBinary(59);
    int a = 59;
    int i=4;
    int b = (a &( ~( (1<<(i+1))-1)));
    printBinary(b);

}





/*
Lecture-50 
Power of XOR operator 

-----Given an array a of n integers all integers are present in event count except one integer,
    find that one integer which has odd coubt in o(n) time complexity and o(1) spaces.

    N<10^5
    a[i]<10^5-----------------

    soluton--
    int main(){
        int n;
        cin>>n;
        int x;
        int ans=0;
        for(int i=0;i<n;++i){
            cin>>x;
            ans= ^=x;

        }
        cout <<ans<<endl;
    }



*/


//lecture 51

/*
//Bitmasking

best complexity for intersection of two sorted arrays is O(n)

to reduce the O(n) time complexity we will use bitmasking 


----taking the AND of two binary numbers will give the intersection
----taking the OR of two binary numbers will give the union  


//worker and the maximum number of days 

#include<iostream>

using namespaces std;

int main(){
    int n;
    cin>>n;

    vector<int> mask(n,0);

    for(int i=0; i<n;i++){
        int num_workers;
        cin>>num_workers;
        int mask=0;

        for(j=0;j<num_workers;++i){
            int day;
            cin>>day;
            mask=(mask|(1<<day));
        }
        mask[i]=mask;
    }
    int max_days=0;
    int person1=-1;
    int person2=-1;


    for(int i=0;i<n;++i){
        for(int j= i+1;j<n;++j){

            int intersection=(mask[i] & mask[j]);
            int common_days= __builtin_popcount(intersection);
            max_days=max(max_days,common_days);
            if(common_days>max_days){
                max_days=common_days;
                person1=i;
                peroson2=j;
            }
          
        }
          cout<<i<<" "<<j<<" "<< common_days<<endl;
    }


}

*/


///Lecture 52
//Subset Generations

/*
how to generate the subsets using bitmasking 



*/
