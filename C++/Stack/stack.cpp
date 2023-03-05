///Lecture On Stack----25 june 2022


#include<bits/stdc++.h>

using namespace std;
int main(){
    //creation
stack<int> st;

//insertion
st.push(5);
st.push(4);
st.push(9);

//check the size
cout<<st.size()<<endl;

//check empty or not 
cout<<st.empty()<<endl;

//check top element
cout<<st.top()<<endl;


st.pop();

}



//stack from scratch

class stack(){
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;
    }

    void push(int data){
      if(top==size-1){
        cout<<"StackOver flow for the element "<<endl;
        
        
              }

        top++;
        cout<< "Inserting at Index" <<top << endl;
        arr[top]=data;
    
    }
    void pop(){
        top--;
    }

    //toget the number of elements present

    itn getsize(){
        return this->top+1;
    }
    int getsize(){
        return this->size;
    }

    bool isEmpty(){
        if(top==-1)
        return true;
        else 
        return false;
        
    }

    int top(){
        return arr[top];

    }



}




//Class Question---

/*
//question 1 ---Create a stack using stl 
take the input n 
take the n elments
output-- print all the elements after removal 

/question 2--
//print the middle element of the stack

Ques--reverse the stack
Ques-- Insert at bottom -

ques-Sort an stack
Ques-- N stacks in an array 
ques --Next smaller element
ques-- Previous Smaller element
ques --Next Greater Element
Ques--Previous Greater Element 
Ques -- Largest Rectangular area in Histogram --Very important ---(  extrasss--- explore using segment tree)
ques-- Celebrity Problem



*/

#include<bits/stdc++.h>

using namespace std;


void printmiddle(stack<int> &st,int T){
    if((TotalSize/2)+1==st.size()){
        cout<<"Middle is" <<st.top();
        return;
    }

    //step1
    int topElement=st.top();
    st.pop();
    //step2
    PrintMiddle(st,TotalSize);
    //step3
    st.push(topElement);
}

 

int main(){
    int n;
    cin>>n;
     stack<int> s;

     while(n--){
        int t;
        cin>>t;
        s.push(t);

     }
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();


     }

     cout<<endl;

     return 0;

}

/*
------------------To Do List--------------------------
Stack using the Linekdlist 

explore stack in static allocation 


*/


//Reverse the Stack

#include<iostream>

using namespace std;


//Insert at bottom 
void insertbottom(stack<int> &st,int item){
    //base case

    if(st.empty())
    {
        st.push(item);
        return;
    }

    //step 1

    int topElement=st.top();
    st.pop();

    //step 2: recursive call
    insertbottom(st,item);

    //
}

void reverseStack(stack<int> &st)
{
    //base case
    if(st.empty())
    return;

    //step 1 
    int topElement=st.top();
    st.pop();

    //step2
    reverse(st);

    //step3
    insertbottom(st,topElement)
}


//Stack 2 
/*
Ques---sort a stack 
Ques---Valid Parenthesis----Very Very Important 
ques--redundant brackets 


*/
#include<iostream>
#include<stack>
using namespace std;


void sortedInsert(stack<int> &s, int data) {
    //base case
    if(s.empty() || s.top() < data) {
        s.push(data);
        return ;
    }

    int topElement = s.top();
    s.pop();

    //Recursive call
    sortedInsert(s,data);

    s.push(topElement);
}

void sortStack(stack<int>& s) {
    //base case;

    if(s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    //Recursive Call
    sortStack(s);

    //sortedInsert 
    sortedInsert(s, topElement);

}

int main() {

    stack<int> s;

    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);

    //functioncall
    sortStack(s);

    cout << "Printing answer" << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}






//Redundant Brackets 

#include<bits/stdc++.h>
using namespace std;


