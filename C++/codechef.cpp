#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
  
    while (test--) {
          bool flag=false;
        int size;
        cin >> size;
        int x=0,y=0;
     for(int i=0;i<size;i++){
        if(i=='U') y++;
         if(i=='D') y--;
          if(i=='L') x--;
           if(i=='R') x++;

           if(x==1 && y==1){
            cout<<"YES"<<endl;
            break;
           }

     }
     cout<<"NO"<<endl;
    }

    return 0;
}
