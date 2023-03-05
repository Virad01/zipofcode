// #include<bits/stdc++.h>

// using namespace std;


// void subString(char str[],int n){
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=n-i; i++){

//             int x=j+i-1;
//             for(int k=j;k<=x;k++)
//             cout<<str[k];

//             cout<<endl;


//         }

//     }
// }
// int main(){
//     char str[]="abc";
//     subString(str,strlen(str));
//     return 0;

// }


///new approach 

//print all the substrings of a given strings

#include<bits/stdc++.h>

using namespace std;


void subString(int arr[],int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i; i++){

            int x=j+i-1;
            for(int k=j;k<=x;k++)
            cout<<arr[k];

            cout<<endl;


        }

    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    subString(arr,6);
    return 0;

}
