//left view of the tree

void solve(Node *root ,vector<int>&ans, int level)
{
  if(root == NULL){
    return;
  }
  if (level == ans.size())
  ans.push_back(root->data);
  solve(root->left,ans,level+1);
  solve(root->right,ans,level+1);

  vector<int> leftview(node *root){
    vector<int> ans;
    solve(root,ans,0);
    return ans;
  }

  vector<int> leftview(Node *root)
  {
    vector<int>ans;
    solve(root, ans , 0);
    return ans;
    
  }

}

//Right Tree
class solution 
{
  public:
  vector <int> rightview(Node *root)
  {
    vector<int> v;
    queue<Node *> q;
    if(!root)
    return v;
    q.push(root);
    q.push(NULL);
    Node *ans;
    while(!q.empty()){
      Node *temp=q.front
    }
  }
}