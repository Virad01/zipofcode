// character array and string   12 May 

//reverse a character array or a string


// #include<bits/stdc++.h>

// using namespace std;

// void reversechararray(char arr[]){
//     // int n = strlen(arr);
//     int s=0, e = n-1;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;

//     }
// }

// using namespace std;

// int  main(){
//   char name[] = "Virad";
// //   char name = "VIRAD";
//   int n =6 ;

//   reversechararray( name , );

  


// }
//anagram question-----veruy important question 
//check whether string a is present in string b or not 



//mimimum number of flips---gfg( goldmansache )

//Diagonal sum---question to practice 

//logic 
//if the given string  is = "0010"
//

#include<bits/stdc++.h>

using namespace std;

int getlength(char arr[]){
  int length=0;
  int index=0;
  while(arr[index] != '\0'){
    length++;
    index++;
  }
  return length;
}

int main(){
  //creation
  char name[10];
  cin>>name; //input 

  cout<<name<<endl;  //print 

 cout<< strlen(name) <<endl;

}


bool checkanagram(string a,string b ){
  int freq[26]=0;
  //incresing the count for string a 
  for(int i=0;i<a.length();i++){

    char ch=a[i];
    int index = ch-'a';
    freq[index]++;

  }

  //decreasing the count for string b 
  for(int i=0;i<b.length();i++){

    char ch=b[i];
    int index = ch-'a';
    freq[index]--;

  }

  bool flag = true;
  for(int i=0;i<26;i++){
    if(freq[i] != 0){
      return false;

    }

  }


}



//flip the number 

char flip(char expected){
  if(expected == '0')
  return '1';
  else
  {
    return '0';
  }
}

int getflips(string str, char expected ){
  int cntflips=0'

  for(int i=0; i<str.length();i++)
    if(str[i] != expected)

    cntflips++;

    expected = flip(expected);
  }
  return cntflips;
}


//spiral matrix is important 


/*


{{{{{{{{{{{{{{CONCEPT}}}}}}}}}}}}}}

char b[] = 'xyz';
char *c = &b[0];
cout << c <<endl;


output will be----xyz (not  address or only x) 

*/
