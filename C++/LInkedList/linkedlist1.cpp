///Linked List   16 06 22 

//**least asked topic------

/*
--it is  a linear data structure consist of set of nodes 

--node---two part onme store the data and other store the address of next node 
. static ke liye hota hai 
this dynamic ke liye hota hai 


why we need linked list ???
--runtime pe linked list ko kam yaa jayada kar sakte hai..jabki array me nii kar sakte hai( dynamicall )
--array and vector  uses contiguos spaces whereas in linked list it is not necessary 

Diadvantages





*/

#include<iostream>

using namespace std;

class Node{
    public:
    int data;    // Data members 
    Node * next;  // data members created a pointer to store the address of next node 
    
    
    //constructor 

    Node(int d) {
       this->data=d;
        this->next= NULL;
    }
    
    
      
    
};
void insertathead(node* &head,int d){
        Node* temp = new Node(d);
        Node->next=head;
        head= Node;
    }


int main(){

    //static allocation

    Node a;
    cout<<a.data<<endl;
    cout<<a.next<<endl;

    //Memory allocation 
    Node*first=new Node(3);  ///new node hamesa address return karta hai isiliye usko store karne ke liye pointer banaya hai 
    cout<<first->data<<endl;
    cout<<first->next<<endl;


return 0;



}

/*
Operation in Linkedlist--
--Insertion---at head , at tail , at any position
--Travesal
deletion---position, value 


*/

//insertion at head 

/*
--Node creation
--address pointing
--pointing the head

Node * temp = new node(5); // creation
temp->next=head;
head = temp
*/

//Travesing the Linked list
/*
Node * temp= head;
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next';
}

//Insertion at any position 
creation of node 
traverse k-1 node
newNode->next= temp->next 
temp->next= newNode

*/

#include<iostream>

using namespace std;


int main(){

}



///Linked List -----Lecture 2 



//reverse a linkedlist 

Node* reverse(Node* &head){
    Node* curr=head;
    Node *prev=NULL;
    while(curr != NULL){
        Node * forward=curr->next;
        curr->next=prev;

        //aage BAdho;
        prev=curr;
        curr= forward;
    }
    return prev;
}




/*
Tortoise Algorithm
*/


//Find Middle of linkedlist     
#include<bits/stdc++.h>
using namespace std;
Node * getmiddleNode(Node*)
int main(){

}

//check the lineklist is circular or not 

//if temp->next==head)
////return true
///if ke andar cout use karte hain to kya hota hai 


//reverse linkedlist in k groups

/*
next = curr->next
curr->next=prev
prev=curr  ( order matters  pehle prev=curr fir curr=nrxt )
curr=next



Node*reverseInK(Node* &head,int k){
    //empty list 
    if(head==NULL)
    return NULL;

    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count =0;
    //reverse the first k node 
    while(curr !=NULL && count<k){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
        count++;
    }

    //aage recursion dekhega 
    //next pointeer will be pointing at the head of the remaining 

    if(next !=NULL)
    head->next=reverse
}
*/

//Flatlen Linkedlist 

#include<bits/stdc++.h>

using namespace std;

int main(){
    
}



creation of linkedlist 



#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node*next;

    //creating the constructor
    Node(int d){
    this->data=d;
    this->next=NULL;
    }
    
};
void insertatrhead(Node * &head,int d){
    //create a node
    Node *temp= new Node(d);
    //pointing
    temp->next= head;
    head=temp;

}

void insertattail(Node * &tail,int d){
    //create a node
    Node *temp= new Node(d);
    //pointing 

    tail->next=temp;
   ///head ko update kar do 
    tail=temp;
}

void insertatanyposition(Node *head,int pos,int d)
//Todo-- tail updation,while inserting node at the end
//todo-- validare that position should be at max 1 more than the current length of ll
{
    if(pos==1){
        insertathead(head,d);
    }
    else{
       //creation of new node
        Node * newnode= new Node(d);
        Node *prev=head;
        //traversing to the desired position 
        int t= pos-2;

        while(t--){
            prev= prev->next;

           
        }

        //connection update 

         newNode->next=prev->next;
         prev->next=newNode;
    }


    

 

}

void traverse(Node * &head){
    Node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        tem[ = temp->next;]
    }

    cout<<endl;

}

void getlength(Node* &head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void deleteNode(Node * &head,int target,int pos){

    //empty list
    {
        if(head==NULL){
            return ;
        }
    }
    Node *temp=head;
    Node *prev=NULL;

    if(target==temp->data && pos==1){
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        while(temp->data != target){
            prev=temp;
            temp=temp->next;
        }

        //here we are assuming we found the element;

        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
    }
}




int main(){
    Node *first= new Node(3);
    Node * head=first;
    //tail ko update kar do
    Node *tail = first;
    Node *pos=first;
    // cout<<first->data<<endl;
    // cout<<first->next<<endl;

    return 0;


}

//palindrome linkedlist;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode *half(ListNode *head){
         if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast->next!=NULL){
            slow->next;
        }
        ListNode * h=slow->next;
        
        return h;
    }
    
    ListNode*reverse(ListNode *head){
      
        ListNode*prev=NULL;
        ListNode *curr=head;
        ListNode *next= NULL;
        while(curr!=NULL){
            next=curr->next;
          
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    
    
    
    
    bool isPalindrome(ListNode* head) {
        ListNode *h= half(head);
        h=reverse(h);
        
        while(h!=NULL){
            if(head->val!=h->val){
                return 0;
            }
            head=head->next;
            h=h->next;
        }
        return 1;
    }
};


bool isPalindrome(ListNode* head) {
    
		if(head==NULL || head->next==NULL) return true;

		ListNode* slow=head, *fast=head->next;    

		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}

		ListNode* ll2_head=slow->next;        
		slow->next=NULL;                        
		ListNode* newhead=rev(ll2_head);        

		while(head!=NULL && newhead!=NULL){     
			if(head->val!=newhead->val) return false;
			head=head->next;
			newhead=newhead->next;
		}

		return true;
	}