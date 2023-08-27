 #include<iostream>
 using namespace std;

 //defining the node
 struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int value){
        data =value;
        left =right= NULL;
    }
 };
 void preorder(node*root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

 }
  void inorder(node*root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

 }  void postorder(node*root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

 }
int main(){
    struct node *root=new node(1);
    cout<<(root->left=new node(2))<<endl;
    cout<<(root->right=new node(3));
    cout<<endl<<(root->left->right=new node(5))<<"\n";
   cout<<"Preorder travesal :\t"; preorder(root);
    cout<<"\nInorder travesal :\t";inorder(root);
    cout<<"\nPostorder travesal:\t";postorder(root);
    // for(int i=0;i<4;i++){
    //     cout<<endl<<root->data;
    //     root->left;
    //     root->right;
    // }
 }