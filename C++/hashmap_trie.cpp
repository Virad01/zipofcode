#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int i;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for( i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(arr[i]==arr[i+1])
        cout<<"NO";
        

        else{
            cout<<"Yes";
        }
    }
}
