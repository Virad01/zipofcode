#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])
            {
                x+=1;
                }
                int ans;
                if(x%2==0){
                    ans=x/2;

                }
                else{
                    ans=x/2+1;
                }
                cout<<ans<<endl;
                }
                return 0;
}
}