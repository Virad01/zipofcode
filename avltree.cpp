#include<iostream>

using namespace std;


class Node {
    public:

    Node* lchild;
    int data;
    Node* rchild;
    int height;

};

class AVL{
    public:
    Node* root;
    AVL(){
        root=nullptr;
    }

    int NodeHeight(Node *p);
    int balancefactor(Node *p);
    Node* LLTRotation(Node *p);
    Node* RRRotation(Node* p);
    Node* RLRotation(Node* p);

    //insert

    Node* rinsert(Node*p,int key);
    void Inorder(Node* p);
    void Inorder(){Inorder(root);};
    Node* getroot(){return root;}
};

int AVL:: NodeHeight(Node*p){
    int hl;
    int hr;
    
    hl = (p&& p->lchild)?P->lchild->height:0;
    hr = (p && p->rchild)?p->rchild->height:0;

    return hl-hr;

}

Node* AVL :: LLRotation(Node* p){
    Node*pr=p->rchild;
    Node*prl=pl->rchild;
}