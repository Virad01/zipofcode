#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int l=0,1 r=n-1;
        int ans=n;

        while(l<=r){
          if((str[l]=='1' and str[r]=='0') || (str[l]=='0' and str[r]=='1')){
            ans-=2;
            l++;
            r--;
          }
          else{
            cout<<ans<<endl;
          
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}