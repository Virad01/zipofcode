#include<bits/stdc++.h>
using namespace std;

int main(){
  int m,n;
  cin>>m;
  cin>>n;
int sum=0;
  for (int i=0;i<=m;i++){
   if(m%i==0){
    sum+=sum+i;
   }
   else{
    return;
   }
  }
  return 0;
}