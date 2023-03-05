// #include<bits/stdc++.h>

// using namespace std;

// void solve(){
//     int x;
//     cin>>x;
//     cout<<x-1<<endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


//Quick Sort

#include<bits/stdc++.h>

using namespace std;



int main(){
   int t;
   cin>>t;
   while(t--){
    int d,h;
    cin>>d>>h;
    vector<long long> arr(d);

    for(int i=0;i<d;i++)
      cin>>arr[i]

    long long per=0;
    long long  h2=1;
    for(auto i:arr){
        if(i=h2){
            per++;
            h2++;
        }
    }

    long long s=j;
    if(s%h==0){
        cout<<s/h<<endl;
    }
    else{
        cout<<s/h+1<<endl;
    }


   } 
   return 0;
}